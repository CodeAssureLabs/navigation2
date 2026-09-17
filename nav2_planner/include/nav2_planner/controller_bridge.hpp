// Copyright (c) 2026 Open Navigation LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NAV2_PLANNER__CONTROLLER_BRIDGE_HPP_
#define NAV2_PLANNER__CONTROLLER_BRIDGE_HPP_

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "nav2_util/base_footprint_publisher.hpp"

namespace nav2_planner
{

/**
 * @brief Bridge between the planner server and the shared nav2_util
 * base footprint publisher. Creates the publisher node that projects the
 * 3D ``base_link`` frame to a 2D ``base_footprint`` frame for planning.
 * @param options Node options forwarded to the publisher node
 * @return The base footprint publisher node
 */
std::shared_ptr<nav2_util::BaseFootprintPublisher> controllerBridge(
  const rclcpp::NodeOptions & options = rclcpp::NodeOptions());

}  // namespace nav2_planner

#endif  // NAV2_PLANNER__CONTROLLER_BRIDGE_HPP_
