#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

class Point2D
{
    // private
    vector<float> points;

    public:
        float *x;
        float *y;
        Point2D();
        Point2D(float, float);
        ~Point2D();
        Point2D(const Point2D &);
        void setPoint(float, float);
        float getPointX() { return *x; }
        float getPointY() { return *y; }
        vector<float> getPoints() { return points; }
};

#endif // POINT2D_H_INCLUDED