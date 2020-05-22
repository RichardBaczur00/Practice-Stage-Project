#include "Shape.h"
#include "Line.h"

//Constructors
Line::Line()
{
    //Empty constructor
}


Line::Line(Point a, Point b)
{
    this->a = a;
    this->b = b;
}
//End constructors

//Destructor
Line::~Line()
{
    //Empty destructor
}
//End destructor

//Draw function
void Line::draw()
{
    double x1, x2, y1, y2;
    x1 = this->a.getX();
    x2 = this->b.getX();
    y1 = this->a.getY();
    y2 = this->b.getY();
    this->e.drawLine(x1, y1, x2, y2);
}
//End draw function

//Zoom function

Line Line::operator*(const int value)
{
    this->b.setX(this->b.getX() * value);
    this->b.setY(this->b.getY() * value);
    return *this;
}
