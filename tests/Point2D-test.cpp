#include "gtest/gtest.h"
#include "Point2D.hpp"

TEST(Point2DTest, TestGetValues) {
    Point2D point = Point2D(56, 35);
    EXPECT_EQ (point.getX(),  56);
    EXPECT_EQ (point.getY(), 35);
};