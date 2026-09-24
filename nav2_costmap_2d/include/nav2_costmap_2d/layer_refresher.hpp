// Copyright (c) 2024 Open Navigation
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

namespace nav2_costmap_2d
{

class Costmap2D;

/**
 * @brief Start a background thread to refresh costmap layers
 * @param costmap Pointer to the Costmap2D instance to refresh
 */
void startLayerRefresher(Costmap2D * costmap);

}  // namespace nav2_costmap_2d

#endif  // NAV2_COSTMAP_2D__LAYER_REFRESHER_HPP_
