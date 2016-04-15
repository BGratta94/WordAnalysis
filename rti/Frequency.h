/*
 * Frequency.h
 *
 *  Created on: Apr 11, 2016
 *      Author: Brandon
 */

#ifndef FREQUENCY_H_
#define FREQUENCY_H_

#include <rti_word.h>
#include <algorithm>
#include <vector>

class Frequency
{
	public:

	    rti_word getTopNum(int x, rti_word wordList[] ); //x is the size number of words requested
		rti_word compareLists(rti_word stateList[], rti_word gradeList[]);

	private:

		rti_word Frequency::bubbleSort(int y, rti_word words[]) //bubble sort y iterations
		{
			int i;
			int j;
			for(i=0;i<y;i++)
			{
				for(j=i;j<sizeof(words); j++)
				{
					if(words[j].frequency()< words[i].frequency())
					{
						rti_word temp = words[i];
						words[i] = words[j];
						words[j] = temp;
					}
				}
			}
			return words;
		}
};

rti_word Frequency::getTopNum(int x, rti_word wordList[] ) //x is the size number of words requested
{
	rti_word words[x] = bubbleSort(x,wordList);
	return words;
}

rti_word Frequency::compareLists(rti_word stateList[], rti_word gradeList[])
{
		//perform a set difference on the two lists (cplusplus.com)
		//return the resulting list
		stateList = bubbleSort(sizeof stateList,stateList);
		gradeList = bubbleSort(sizeof gradeList,gradeList);
		std::vector<rti_word> v;
		rti_word temp;
		int i,n;
		bool notFound;
		for(i=0; i<sizeof stateList;i++)
		{
			temp = stateList[i];
			notFound = false;
			for(n=0;n<sizeof gradeList;n++)
			{
				if(gradeList[n].spelling() == temp.spelling())
				{
					notFound = false;
					break;
				}
				else
				{
					notFound = true;
				}
			}
			if(notFound == true)
			{
				v.push_back(temp);
			}
		}
		return v;


		//std::vector<int>::iterator it;
		//it=std::set_difference(stateList[0],stateList[sizeof stateList],gradeList[0],gradeList[sizeof gradeList],v.begin());
}

#endif /* FREQUENCY_H_ */
