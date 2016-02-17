#include <boxm/basic/boxm_block_vis_graph_iterator.txx>
#include <boxm/sample/boxm_sample.h>
#include <boct/boct_tree.txx>
#include <vgl/io/vgl_io_point_3d.h>

typedef boct_tree<short, boxm_sample<BOXM_APM_MOB_GREY> > tree_type;
BOXM_BLOCK_VIS_GRAPH_ITERATOR_INSTANTIATE(tree_type);
