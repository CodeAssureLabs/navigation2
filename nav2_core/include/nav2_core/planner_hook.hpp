#ifndef NAV2_CORE__PLANNER_HOOK_HPP_
#define NAV2_CORE__PLANNER_HOOK_HPP_

#include <memory>

#include "nav2_planner/planner_server.hpp"

namespace nav2_core
{

class PlannerHook
{
public:
  explicit PlannerHook(std::shared_ptr<nav2_planner::PlannerServer> server)
  : server_(server) {}

private:
  std::shared_ptr<nav2_planner::PlannerServer> server_;
};

}  // namespace nav2_core

#endif  // NAV2_CORE__PLANNER_HOOK_HPP_
