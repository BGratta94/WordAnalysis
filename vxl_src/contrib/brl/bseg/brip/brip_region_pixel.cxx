#include "brip_region_pixel.h"
#include <vcl_iostream.h>

vcl_ostream& operator<<(vcl_ostream& s, brip_region_pixel const& sd)
{
  return
  s << "[location:(" << sd.location_.x() << ' ' << sd.location_.y()
    << ") nearest:(" << sd.nearest_.x() << ' ' << sd.nearest_.y()
    << ") cost:" << sd.cost_
    << " count:" << sd.count_
    << " label:" << sd.label_
    << " dist:"  << sd.dist_ << ']';
}
