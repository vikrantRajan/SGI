#ifndef COMPARISON_H_INCLUDED
#define COMPARISON_H_INCLUDED
#include "rectangle.h"
#include "point2D.h"

class Comparison
{
    bool overlap(float,float,float,float);
    public: 
    Comparison();
    ~Comparison();
    bool checkPoint(Point2D, Rectangle);
    bool checkRectangles(Rectangle, Rectangle);
};

#endif // COMPARISON_H_INCLUDED