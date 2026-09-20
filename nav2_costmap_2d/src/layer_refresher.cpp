#include <chrono>

#include "nav2_costmap_2d/costmap_2d.hpp"
#include "nav2_ros_common/interface_factories.hpp"
#include "nav2_ros_common/lifecycle_node.hpp"

namespace nav2_costmap_2d
{

rclcpp::TimerBase::SharedPtr startLayerRefresher(
  const nav2::LifecycleNode::SharedPtr & node,
  Costmap2D * costmap,
  std::chrono::milliseconds period)
{
  // Periodic refresh runs on the node executor, not on a raw std::thread.
  return nav2::create_timer(node, period, [costmap]() {(void)costmap;});
}

}  // namespace nav2_costmap_2d
