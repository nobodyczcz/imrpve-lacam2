#include <lacam2.hpp>

#include "gtest/gtest.h"

TEST(dist_table, init)
{
   auto MT = std::mt19937(0);

  const auto scen_filename = "./assets/random-32-32-10-random-1.scen";
  const auto map_filename = "./assets/random-32-32-10.map";
  const auto ins = Instance(scen_filename, map_filename,&MT, 3);
  auto dist_table = DistTable(ins);

  ASSERT_EQ(dist_table.get(0, ins.goals[0]), 0);
  ASSERT_EQ(dist_table.get(0, ins.starts[0]), 16);
}
