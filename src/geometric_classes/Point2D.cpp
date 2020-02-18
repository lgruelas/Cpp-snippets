#include <iostream>

#include "Point2D.hpp"

Point2D::Point2D(const float& x, const float& y): x(x), y(y) {}

float Point2D::getX() {
    return x;
}

float Point2D::getY() {
    return y;
}