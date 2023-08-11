#include <lacam2.hpp>

#include "gtest/gtest.h"

TEST(Instance, initialize)
{
   auto MT = std::mt19937(0);

  const auto scen_filename = "./assets/random-32-32-10-random-1.scen";
  const auto map_filename = "./assets/random-32-32-10.map";
  const auto ins = Instance(scen_filename, map_filename,&MT,3);

  ASSERT_EQ(size(ins.starts), 3);
  ASSERT_EQ(size(ins.goals), 3);
  ASSERT_EQ(ins.starts[0]->index, 203);
  ASSERT_EQ(ins.goals[0]->index, 583);
}
