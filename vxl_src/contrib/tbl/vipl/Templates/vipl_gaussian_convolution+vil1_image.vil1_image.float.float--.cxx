#ifndef INSTANTIATE_TEMPLATES
#include <vipl/accessors/vipl_accessors_vil1_image.txx>
#include <vipl/vipl_gaussian_convolution.txx>

template class vipl_gaussian_convolution<vil1_image, vil1_image, float, float, vipl_trivial_pixeliter>;
#endif
