#pragma once

class Point2D {
    public:
        Point2D(const float& x, const float& y);
        float getX();
        float getY();
    private:
        float x, y;
};