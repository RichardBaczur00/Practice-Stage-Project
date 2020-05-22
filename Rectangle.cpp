#include "Shape.h"
#include "Rectangle.h"

//Constructors
Rectangle::Rectangle()
{
    //Empty constructor
}

Rectangle::Rectangle(Point a, Point b, Point c, Point d, bool isFull)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->isFull = isFull;
}
//End constructors

//Destructor
Rectangle::~Rectangle()
{
    //Empty destructor
}
//End desctructor

//Draw function
void Rectangle::draw()
{
    if (this->isFull)
    {
        //Creeaza 2 triunghiuri(care vor forma un patrulater) pline
        Triangle jumatate1(a, b, c, true);
        Triangle jumatate2(a, c, d, true);
        jumatate1.draw();
        jumatate2.draw();
    }
    else
    {
        Line l1(a, b);
        Line l2(b, c);
        Line l3(c, d);
        Line l4(d, a);
        l1.draw();
        l2.draw();
        l3.draw();
        l4.draw();
    }
}
//End draw function

//Zoom function
Rectangle Rectangle::operator*(const int value)
{
    this->b.setX(this->b.getX() * value);
    this->b.setY(this->b.getY() * value);
    this->c.setX(this->c.getX() * value);
    this->c.setY(this->c.getY() * value);
    this->d.setX(this->d.getX() * value);
    this->d.setY(this->d.getY() * value);
    return *this;
}
//End zoom function