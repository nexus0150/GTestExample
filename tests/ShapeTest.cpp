#include "Shape.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using ::testing::AtLeast;

TEST(ShapeTest, doubleValueTests) 
{
   EXPECT_EQ (Shape::doubleValue (0),  0);
   //EXPECT_NE (Shape::doubleValue (10), 20); // This test will fail to prove Gtest working
   EXPECT_EQ (Shape::doubleValue (10), 20); // This test will pass, uncomment when ready.
   EXPECT_EQ (Shape::doubleValue (50), 100);
}