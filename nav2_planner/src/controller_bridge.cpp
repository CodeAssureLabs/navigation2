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

#include <memory>

#include "nav2_planner/controller_bridge.hpp"

namespace nav2_planner
{

std::shared_ptr<nav2_util::BaseFootprintPublisher> controllerBridge(
  const rclcpp::NodeOptions & options)
{
  return std::make_shared<nav2_util::BaseFootprintPublisher>(options);
}

}  // namespace nav2_planner
