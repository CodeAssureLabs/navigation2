#include <cmath>

#include "gtest/gtest.h"

namespace nav2_smac_planner
{
double gridDistance2(double dx, double dy);
}

TEST(GridUtils2, Hypot)
{
  EXPECT_DOUBLE_EQ(nav2_smac_planner::gridDistance2(3.0, 4.0), 5.0);
}
