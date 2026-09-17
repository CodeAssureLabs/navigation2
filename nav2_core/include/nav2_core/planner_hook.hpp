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

#ifndef NAV2_CORE__PLANNER_HOOK_HPP_
#define NAV2_CORE__PLANNER_HOOK_HPP_

#include <memory>
#include <string>
#include <vector>

#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav_msgs/msg/path.hpp"

namespace nav2_core
{

/**
 * @class PlannerHook
 * @brief Abstract observer interface invoked by the planner server around each
 * plan computation.
 *
 * nav2_core only declares the interface. The planner server (a concrete
 * service-layer package) owns a list of hooks and drives them, so nothing in
 * nav2_core needs to know about any particular server implementation.
 */
class PlannerHook
{
public:
  using Ptr = std::shared_ptr<PlannerHook>;

  /**
   * @brief Virtual destructor
   */
  virtual ~PlannerHook() {}

  /**
   * @brief Called before a planner plugin is asked for a plan
   * @param start The starting pose, already in the global frame
   * @param goal The goal pose, already in the global frame
   * @param viapoints Intermediate viapoints, if any
   * @param planner_id The planner plugin that will be used
   */
  virtual void onPlanRequested(
    const geometry_msgs::msg::PoseStamped & start,
    const geometry_msgs::msg::PoseStamped & goal,
    const std::vector<geometry_msgs::msg::PoseStamped> & viapoints,
    const std::string & planner_id) = 0;

  /**
   * @brief Called after a planner plugin has returned a plan
   * @param path The computed path (may be empty if the plugin failed)
   * @param planner_id The planner plugin that was used
   */
  virtual void onPlanComputed(
    const nav_msgs::msg::Path & path,
    const std::string & planner_id) = 0;
};

}  // namespace nav2_core

#endif  // NAV2_CORE__PLANNER_HOOK_HPP_
