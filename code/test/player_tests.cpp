#include <gtest/gtest.h>
#include "player.h"

class PlayerTestClass : public ::testing::Test {
  protected:
    PlayerTestClass()
      : player("marco") {}

    void SetUp() override {
         
    }

    Player player;
};

TEST_F(PlayerTestClass, NameIsSet) 
{
   EXPECT_EQ(player.name(), "marco");
}

