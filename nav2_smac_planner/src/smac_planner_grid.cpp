#include <memory>
#include <string>

#include "nav2_core/global_planner.hpp"

namespace nav2_smac_planner
{

class SmacPlannerGrid : public nav2_core::GlobalPlanner
{
public:
  SmacPlannerGrid() = default;
  ~SmacPlannerGrid() override = default;
};

}  // namespace nav2_smac_planner
