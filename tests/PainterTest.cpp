#include "MockTurtle.h"
#include "Painter.cpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using ::testing::AtLeast;

TEST(MockTurtleTest, DoTest) 
{
   MockTurtle myMock;
   EXPECT_CALL(myMock, PenDown())
      .Times(AtLeast(1));
    //  .Times(AtLeast(2));

   EXPECT_CALL(myMock, Forward(30))
      .Times(AtLeast(2));

    EXPECT_CALL(myMock, Turn(30))
      .Times(AtLeast(1));

	Painter painter;

    EXPECT_TRUE(painter.DrawSomething(myMock));
}
