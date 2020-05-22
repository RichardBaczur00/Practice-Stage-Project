#include "Shape.h"
#include "Point.h"

//Constructors
Point::Point()
{
    //empty constructor
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}
//End Constructors

//Destructor
Point::~Point()
{
    //empty destructor
}
//End destructor

//Getters
double Point::getX()
{
    return this->x;
}

double Point::getY()
{
    return this->y;
}
//End getters

//Setters
void Point::setX(double newX)
{
    this->x = newX;
}

void Point::setY(double newY)
{
    this->y = newY;
}
//End setters

//Drawing function
void Point::draw()
{
    this->e.drawPoint(this->x, this->y);
}