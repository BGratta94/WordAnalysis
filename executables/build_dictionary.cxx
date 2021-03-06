//:
// \file
// \author Charlene Tsai
// \date  June 2015
// \verbatim
//   Build the dictionary of words in the literature. 
// \endverbatim
//
//  The usage is
//
//    build_dictionary -cmu cmu-arpabet -lit literature.xml -old old_dictionary
//
//  where:
//    -cmu cmu-arpabet     The text file from the cmu website 
//    -lit literature      The xml file containing all the books in the literature to provide the frequency information 
//    -old old_dictionary  The xml file of the old dictionary where information can be imported.
//
//  Action:
//    1. Generate the xml file for the dictionary 
//    2. If �old is set, entries can be copied from the old dictionary

#include <vcl_vector.h>
#include <vcl_algorithm.h>
#include <vcl_string.h>
#include <vcl_fstream.h>
#include <vcl_sstream.h>
#include <emulation/vcl_pair.h>

#include <vul/vul_arg.h>
#include <vul/vul_string.h>
#include <vul/vul_reg_exp.h>

#include <rti/rti_literature_sptr.h>
#include <rti/rti_literature.h>
#include <rti/rti_word.h>
#include <rti/rti_dictionary.h>
#include <rti/rti_dictionary_sptr.h>
#include <rti/rti_book.h>
#include <rti/rti_book_sptr.h>
#include <vul/vul_reg_exp.h>

vcl_string trim(const vcl_string& str)
{
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last-first+1));
}

bool import_cmu_dictionary(vcl_string cmu_filename, vcl_vector<vcl_pair<vcl_string, vcl_string> >& arpabets )
{
  vcl_ifstream cmu_stream;   
  cmu_stream.open(cmu_filename);
  if (!cmu_stream.is_open()) return false;

  arpabets.reserve(134000);
  vul_reg_exp re("([0-9]+)");
  vcl_string arpabet, line;
  vcl_string spelling;
  while(!cmu_stream.eof()) {
    vcl_getline(cmu_stream, line);
    vcl_stringstream line_str(line);
    line_str>>spelling;
    if (spelling == vcl_string(";;;")) continue; //skip the comment
    vcl_getline(line_str, arpabet);
    if (!re.find(spelling)) {  
      arpabet = trim(arpabet);
      //arpabets.push_back(vcl_pair<vcl_string, vcl_string>(vul_string_downcase(spelling), arpabet));
      arpabets.push_back(vcl_pair<vcl_string, vcl_string>(spelling, arpabet)); //keep the upper case
    }
    /*
    cmu_stream>>spelling;
    vcl_getline(cmu_stream, arpabet);
    if (!re.find(spelling)) {  
      arpabet = trim(arpabet);
      arpabets.push_back(vcl_pair<vcl_string, vcl_string>(vul_string_downcase(spelling), arpabet));
    }
    */
  }
  return true;
}

bool find_arpabet(vcl_string spelling, const vcl_vector<vcl_pair<vcl_string, vcl_string> >& cmu_arpabets, vcl_string& arpabet)
{
  //find position for the exact search using bisection search (iterative version) or return the position the word should be found.

  vul_string_upcase(spelling); //convert to upper case 
  int imax = int(cmu_arpabets.size()-1);
  int imin = 0;
  int idx;
  while (imax >= imin) {
    idx = (imax+imin)/2; // calculate the midpoint for roughly equal partition
    if(cmu_arpabets[idx].first == spelling) {
      arpabet = cmu_arpabets[idx].second;      
      return true; // key found at index imid
    }
    else if (cmu_arpabets[idx].first < spelling)// determine which subarray to search
      imin = idx + 1; // change min index to search upper subarray
    else imax = idx - 1; // change max index to search lower subarray
  }

  if (cmu_arpabets[idx].first < spelling) idx++; 
  return false;// key was not found
}

int
main( int argc, char** argv )
{
  //  Build arguments
  vul_arg<char *> cmu ("-cmu", "The arpabet file from the CMU website: http://svn.code.sf.net/p/cmusphinx/code/trunk/cmudict/cmudict-0.7b.txt" );
  vul_arg<char *> lit ( "-lit", "The xml file containing all the books in the literature to provide the frequency information" );
  vul_arg<char *> old ( "-old", "The old dictionary where the information can be imported from" );
  

  //  Parse arguments and make sure the transformation files are set.
  vul_arg_parse( argc, argv);
  vcl_string filename;
  rti_dictionary_sptr old_dict = new rti_dictionary();
  rti_literature_sptr literature = new rti_literature();
  vcl_vector<vcl_pair<vcl_string, vcl_string> > cmu_arpabets;

  if (!cmu.set()) {
    vcl_cout<<"Missing the arpabet file from the CMU website: http://svn.code.sf.net/p/cmusphinx/code/trunk/cmudict/cmudict-0.7b"<<vcl_endl;
    return 1;
  }
  else {
    if (!import_cmu_dictionary(cmu(), cmu_arpabets))
      return 1;
  }
  if (!lit.set()) {
    vcl_cout<<"Miss the xml file containing all the books in the literature to provide the frequency information"<<vcl_endl;
    return 1;
  }
  else literature->read_xml(lit());
  if (old.set()) {
    old_dict->read_xml(old());
  }

  vcl_cout<<"The xml filename for the NEW dictionary: ";
  vcl_getline(vcl_cin,filename);
  bool up_to_date = true;

  rti_dictionary_sptr dict = new rti_dictionary();
  rti_word_sptr word;
  //iterate through the book list to collect the words
  int pos;
  vcl_cout<<"Compiling the dictionary from "<<lit()<<" ..."<<vcl_endl;
  for (unsigned int i=0; i<literature->size(); i++) {
    rti_book_sptr book = (*literature)[i];
    for (unsigned int j=0; j<book->size(); j++) {
      if (dict->find((*book)[j].first, pos)) (*dict)[pos]->increase_frequency((*book)[j].second);
      else {
        vcl_string arpabet; 
        if (find_arpabet((*book)[j].first, cmu_arpabets, arpabet)) word = new rti_word((*book)[j].first, (*book)[j].second, arpabet);
        else {
          word = new rti_word((*book)[j].first,(*book)[j].second);
          vcl_cout<<"\t"<<word->spelling()<<" not found"<<vcl_endl;
          up_to_date = false;
        }
        dict->insert(word, pos);
      }
    }
  }

  // If the old dictionary is provided, import information from the old dictionary 
  if (old.set()) {
    vcl_cout<<"Importing information from "<<old()<<" ..."<<vcl_endl;
    up_to_date = true;
    for (unsigned int i = 0; i<dict->size(); i++) {
      if (old_dict->find((*dict)[i]->spelling(), pos) && (*old_dict)[pos]->valid())
        (*dict)[i]->copy_arpabet_morpheme( (*old_dict)[pos] );
      if (!(*dict)[i]->valid()) {
        vcl_cout<<"\t"<<(*dict)[i]->spelling()<<" not found"<<vcl_endl;
        up_to_date = false;
      }
    }
  }

  vcl_cout<<"Computing phonotactic information ..."<<vcl_endl;
  dict->compute_PSegAves();
  dict->compute_BiphAves();
  dict->compute_neighbors(); 

  // Write to the XML
  dict->write_xml(filename, up_to_date);

  return 0;
}


