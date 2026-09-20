#ifndef NAV2_COSTMAP_2D__LAYER_REFRESHER_HPP_
#define NAV2_COSTMAP_2D__LAYER_REFRESHER_HPP_

#include <chrono>

#include "nav2_costmap_2d/costmap_2d.hpp"
#include "nav2_ros_common/lifecycle_node.hpp"
#include "rclcpp/rclcpp.hpp"

namespace nav2_costmap_2d
{

/**
 * @brief Start a periodic refresh of the given costmap on the node executor.
 * @param node Lifecycle node whose executor runs the refresh
 * @param costmap Costmap to refresh
 * @param period Refresh period
 * @return Timer handle; the caller owns its lifetime
 */
rclcpp::TimerBase::SharedPtr startLayerRefresher(
  const nav2::LifecycleNode::SharedPtr & node,
  Costmap2D * costmap,
  std::chrono::milliseconds period);

}  // namespace nav2_costmap_2d

#endif  // NAV2_COSTMAP_2D__LAYER_REFRESHER_HPP_
