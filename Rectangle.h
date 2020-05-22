#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Triangle.h"

class Rectangle : public Shape
{
public:
    Rectangle();
    Rectangle(Point, Point, Point, Point, bool);
    ~Rectangle();
    void draw();
    Rectangle operator*(const int);
protected:

private:
    Point a;
    Point b;
    Point c;
    Point d;
    bool isFull;
};

#endif