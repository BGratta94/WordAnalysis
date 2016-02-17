#ifndef bstm_cpp_processes_h_
#define bstm_cpp_processes_h_

#include <bprb/bprb_func_process.h>
#include <bprb/bprb_macros.h>

//the init functions
DECLARE_FUNC_CONS(bstm_cpp_ingest_boxm2_scene_process);
DECLARE_FUNC_CONS(bstm_cpp_label_bb_process);
DECLARE_FUNC_CONS(bstm_cpp_label_tt_depth_process);
DECLARE_FUNC_CONS(bstm_cpp_analyze_coherency_process);
DECLARE_FUNC_CONS(bstm_cpp_refine_spacetime_process);
DECLARE_FUNC_CONS(bstm_cpp_refine_space_process);
DECLARE_FUNC_CONS(bstm_cpp_merge_tt_process);
DECLARE_FUNC_CONS(bstm_cpp_extract_point_cloud_process);
DECLARE_FUNC_CONS(bstm_cpp_export_point_cloud_process);
DECLARE_FUNC_CONS(bstm_cpp_refine_tt_process);
DECLARE_FUNC_CONS(bstm_cpp_majority_filter_process);



#endif
