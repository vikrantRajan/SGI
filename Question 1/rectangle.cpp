#include "Headers/rectangle.h"
#include <vector>

int Rectangle::counter = 0;
Rectangle::Rectangle()
{
    counter++;
    this->ID = counter;
    this->positionX = 0;
    this->positionY = 0;
    this->height = 10;
    this->width = 10;
    this->setCoordinates();
    cout << "Constructured Rectangle ID: " << this->ID << endl;
    cout << "X1: " << this->getX1position()
         << " Y1: " << this->getY1position()
         << " X2: " << this->getX2position()
         << " Y2: " << this->getY2position()
         << " Width: " << this->getWidth()
         << " Height: " << this->getHeight()
         << endl
         << endl;
}

// Rectangle::Rectangle(const Rectangle &obj)
// {
//     // cout << "Rect Copy Constructor" << endl;
//     // this->x1 = new float(*(obj.x1));
// }

Rectangle::Rectangle(float x, float y, float h, float w)
{
    counter++;
    this->ID = counter;
    this->positionX = x;
    this->positionY = y;
    this->height = h;
    this->width = w;
    this->setCoordinates();
    cout << "Constructured Rectangle ID: " << this->ID << endl;
    cout << "X1: " << this->getX1position()
         << " Y1: " << this->getY1position()
         << " X2: " << this->getX2position()
         << " Y2: " << this->getY2position()
         << " Width: " << this->getWidth()
         << " Height: " << this->getHeight()
         << endl
         << endl
         << endl;
}

void Rectangle::setCoordinates() 
{
    this->x1 = this->positionX;
    this->y1 = this->positionY;
    this->x2 = this->positionX + this->width;
    this->y2 = this->positionY + this->height;
}

Rectangle::~Rectangle()
{

    // cout << "Deconstructured Rectangle ID: " << this->ID << endl;
}

void Rectangle::setHeight(float height) 
{
    this->height = height;
    this->setCoordinates();
}

void Rectangle::setWidth(float width) 
{
    this->width = width;
    this->setCoordinates();
}

void Rectangle::setXYposition(float x, float y) 
{
    this->positionX = x;
    this->positionY = y;
    this->setCoordinates();
}
