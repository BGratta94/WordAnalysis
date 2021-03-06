#include <bvxm/grid/bvxm_voxel_storage_disk.txx>
#include <bsta/bsta_von_mises.h>
#include <bsta/bsta_attributes.h>
#include <bsta/io/bsta_io_von_mises.h>
#include <bsta/io/bsta_io_attributes.h>


typedef bsta_vsum_num_obs<bsta_von_mises<double, 3> > dir_dist;
BVXM_VOXEL_STORAGE_DISK_INSTANTIATE(dir_dist);
