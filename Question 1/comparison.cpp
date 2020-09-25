#include "Headers/comparison.h"
#include <iostream>
using namespace std;

Comparison::Comparison()
{
    // cout << "Start Comparison Constructor" << endl;
}

Comparison::~Comparison()
{
    // cout << endl
    //      << "Comparison Destructured" 
    //      << endl
    //      << endl;
}

bool Comparison::checkPoint(Point2D point, Rectangle rectangle)
{
    // 1. Point(x) has to be more than Rect.x1
    // 2. Point(x) has to be less than Rect.x2
    // 3. Point(y) has to be more than Rect.y1
    // 4. Point(y) has to be less than Rect.y2
    // If all 4 conditions are met then point is within rectangle
    if (point.getPointX() >= rectangle.getX1position() 
    && point.getPointX() <= rectangle.getX2position() 
    && point.getPointY() >= rectangle.getY1position() 
    && point.getPointY() <= rectangle.getY2position())
    {
        cout << "!! This Point Overlaps !!" << endl;
        return true;
    } else {
        cout << "!! This Point Does Not Overlap !!" << endl;
        return false;
    }
    return false;
}

bool Comparison::checkRectangles(Rectangle primaryRectangle, Rectangle secondRectangle)
{
    if (this->overlap(primaryRectangle.getX1position(),
                        primaryRectangle.getX2position(),
                        secondRectangle.getX1position(),
                        secondRectangle.getX2position()) &&
        this->overlap(primaryRectangle.getY1position(),
                        primaryRectangle.getY2position(),
                        secondRectangle.getY1position(),
                        secondRectangle.getY2position()))
    {
        cout << "!! These Rectangles Overlap !!"
             << endl
             << endl
             << endl;
        return true;
    }
    else
    {
        cout << "!! These Rectangles Don't Overlap !!" << endl
             << endl
             << endl;
        return false;
    }
}

bool Comparison::overlap(float a1, float a2, float a3, float a4)
{
    // SEARCH FOR WHAT WE DON'T WANT
    // 1. Rect[1]x1 is less than Rect[2]x1   
    //    Rect[1]y1 is less than Rect[2]y1

    // 2. Rect[1]x2 is less than Rect[2]x1
    //    Rect[1]y2 is less than Rect[2]y1
    // This means that Rect[1] is far out to the left(x-axis)/bottom(y-axis)

    if (a1 < a3 && a2 < a3)
        return false;

    // 3. Rect[1]x1 is more than Rect[2]x2
    //    Rect[1]y1 is more than Rect[2]y2
    
    // 4. Rect[1]x2 is more than Rect[2]x2
    //    Rect[1]y2 is more than Rect[2]y2
    // This means that Rect[1] is far out to the right(x-axis)/top(y-axis)

    if (a1 > a4 && a2 > a4)
        return false;

    // After this we call the function again with Y.
    // If the above statements return false 
    // then we know for sure its NOT overlapping
    // If none of the conditions are met & don't 'return false' then
    // These rectangles have to overlap 

    return true;

}