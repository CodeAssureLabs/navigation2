#include "nav2_costmap_2d/costmap_2d.hpp"

namespace nav2_costmap_2d
{

void startLayerRefresher(Costmap2D * costmap)
{
  // Costmap layers run on the node executor, so the refresh runs
  // synchronously on the calling thread rather than a detached std::thread.
  (void)costmap;
}

}  // namespace nav2_costmap_2d
