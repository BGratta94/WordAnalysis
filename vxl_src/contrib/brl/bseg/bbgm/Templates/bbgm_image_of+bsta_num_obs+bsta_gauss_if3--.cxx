#include <bbgm/bbgm_image_of.txx>
#include <bsta/bsta_attributes.h>
#include <bsta/bsta_gaussian_indep.txx>
#include <bsta/bsta_gauss_if3.h>
#include <bsta/io/bsta_io_attributes.h>
#include <bsta/io/bsta_io_gaussian_indep.h>

typedef bsta_num_obs<bsta_gauss_if3> gauss_type;
BBGM_IMAGE_INSTANTIATE(gauss_type);
