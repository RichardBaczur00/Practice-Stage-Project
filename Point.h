#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include "Shape.h"

class Point : public Shape
{
public:
    Point();
    Point(double x, double y);
    ~Point();
    void setX(double newX);
    void setY(double newY);
    double getX();
    double getY();
    void draw();

protected:

private:
    double x;
    double y;
};

#endif