#include <cmath>

#include "nav2_core/global_planner.hpp"

namespace nav2_smac_planner
{

double gridDistance2(double dx, double dy)
{
  return std::hypot(dx, dy);
}

}  // namespace nav2_smac_planner
