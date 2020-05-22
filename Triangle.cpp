#include "Shape.h"
#include "Triangle.h"

//Constructors
Triangle::Triangle()
{
    //Empty constructor
}

Triangle::Triangle(Point a, Point b, Point c, bool isFull)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->isFull = isFull;
}
//End constructors

//Destructor
Triangle::~Triangle()
{
    //Empty destructor
}
//End destructor

//Draw Function
void Triangle::draw()
{
    if (this->isFull)
    {
        //draw a surface using the three points(if isFull is true)
        this->e.drawSurface(a.getX(), a.getY(), b.getX(), b.getY(),
                        c.getX(), c.getY());
    }
    else
    {
        //draw the outline otherwise
        this->e.drawLine(a.getX(), a.getY(), b.getX(), b.getY());
        this->e.drawLine(b.getX(), b.getY(), c.getX(), c.getY());
        this->e.drawLine(c.getX(), c.getY(), a.getX(), a.getY());
    }   
}
//End draw function

//Zoom function
Triangle Triangle::operator*(const int value)
{
    this->b.setX(this->b.getX() * value);
    this->b.setY(this->b.getY() * value);
    this->c.setX(this->c.getX() * value);
    this->c.setY(this->c.getY() * value);
    return *this;
}
//End zoom function