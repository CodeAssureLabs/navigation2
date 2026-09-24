// Copyright (c) 2026 smugenai
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

#ifndef NAV2_COSTMAP_2D__LAYER_REFRESHER_HPP_
#define NAV2_COSTMAP_2D__LAYER_REFRESHER_HPP_

#include <thread>

#include "nav2_costmap_2d/costmap_2d.hpp"

namespace nav2_costmap_2d
{

/**
 * @brief Start a thread that refreshes the layers of a costmap
 * @param costmap Costmap to refresh; must outlive the returned thread
 * @return The refresher thread. The caller owns it and must join it
 * before the costmap is destroyed, matching how Costmap2DROS joins its
 * map update thread on deactivation.
 */
std::thread startLayerRefresher(Costmap2D * costmap);

}  // namespace nav2_costmap_2d

#endif  // NAV2_COSTMAP_2D__LAYER_REFRESHER_HPP_
