// Specification:
// Design and Implement a C++ program that implements the following:
// • 2D Rectangle Class with floating point coordinates
// o Include methods for constructing an axis-aligned Rectangle with initial size and coordinates
// o Include a Copy constructor and an Assignment operator
// • Algorithm that checks whether or not a 2D point is contained in an axis-aligned Rectangle
// • Algorithm that checks whether or not two axis-aligned Rectangles intersect
// • Simple test code that creates instances of your class and tests your implementation
// Given:
// You can use this class in your implementation. Feel free to modify this class as well.

#include <iostream>
#include "Headers/rectangle.h" // Rectangle class prototype
#include "rectangle.cpp"       // Rectangle class methods
#include "Headers/point2D.h" // Point2D class prototype
#include "point2D.cpp"       // Point2D class methods
#include "comparison.cpp" // Comparison methods
#include "Headers/comparison.h" // Comparison prototype
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    // Rectangle..(more like a square) automatically instantiates with
    // this->positionX = 0; this->positionY = 0; this->height = 10; this->width = 10;
    const Rectangle primaryRectangle;

    // Can create instance of axis alligned rectangles with (X, Y, Height, Width)
    // 1. Check when rect[2] is on the bottom left compared to rect[1]
    Rectangle secondRectangle(-9,-9,10,10);
    // Rectangle secondRectangle(1, 1, 2, 0);

    // // 2. Check when rect[2] is on the top left compared to rect[1]
    // secondRectangle.setXYposition(-9, 9);

    // // 3. Check when rect[2] is on the top right compared to rect[1]
    // secondRectangle.setXYposition(9, 9);

    // // 4. Check when rect[2] is on the bottom right compared to rect[1]
    // secondRectangle.setXYposition(9, -9);

    // // 5. Check when rect[2] points don't intersect in rect[1]
    // secondRectangle.setXYposition(1, -5);
    // secondRectangle.setHeight(25);

    // 6. What if none of the corner points intersect?
    // secondRectangle.setXYposition(3, -3);
    // secondRectangle.setWidth(5);
    // secondRectangle.setHeight(15);

    Point2D firstPoint;
    Point2D secondPoint = firstPoint;
    Point2D thirdPoint = firstPoint;
    *(secondPoint.x) = 1.23;
    *(secondPoint.y) = 3.23;

    *(thirdPoint.x) = 21.23;
    *(thirdPoint.y) = 30.23;

    // You can move this around with (x, y)
    firstPoint.setPoint(4.99, 10.001);

    Comparison compare;
    compare.checkRectangles(primaryRectangle, secondRectangle);
    compare.checkPoint(firstPoint, primaryRectangle);
    compare.checkPoint(secondPoint, primaryRectangle);
    compare.checkPoint(thirdPoint, primaryRectangle);

        return 0;
    }