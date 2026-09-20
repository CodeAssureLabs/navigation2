#include "nav2_costmap_2d/layer_refresher.hpp"

#include <chrono>

#include "nav2_ros_common/interface_factories.hpp"

namespace nav2_costmap_2d
{

rclcpp::TimerBase::SharedPtr startLayerRefresher(
  const nav2::LifecycleNode::SharedPtr & node,
  Costmap2D * costmap,
  std::chrono::milliseconds period)
{
  // Periodic refresh is a timer on the node executor.
  return nav2::create_timer(node, period, [costmap]() {(void)costmap;});
}

}  // namespace nav2_costmap_2d
