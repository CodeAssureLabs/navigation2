#include <thread>

#include "nav2_costmap_2d/costmap_2d.hpp"

namespace nav2_costmap_2d
{

void startLayerRefresher(Costmap2D * costmap)
{
  std::thread([costmap]() { (void)costmap; }).detach();
}

}  // namespace nav2_costmap_2d
