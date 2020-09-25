#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

class Rectangle
{
    // private
    static int counter;
    int ID;
    float height;
    float width;
    float positionX;
    float positionY;

    void setCoordinates();
    float x1;
    float x2;
    float y1;
    float y2;

    public:
        Rectangle();
        Rectangle(float, float, float, float);
        ~Rectangle();
        void setHeight(float);
        void setWidth(float);
        void setXYposition(float, float);
        float getHeight() const { return height; }
        float getWidth() const { return width; }
        float getX1position() const { return x1; }
        float getX2position() const { return x2; }
        float getY1position() const { return y1; }
        float getY2position() const { return y2; }
        int getID() const { return ID; }
        static int getCounter() { return counter; }
        };

#endif // RECTANGLE_H_INCLUDED