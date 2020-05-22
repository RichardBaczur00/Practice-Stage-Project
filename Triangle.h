#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "Point.h"
#include "Line.h"

class Triangle : public Shape
{
public:
    Triangle();
    Triangle(Point, Point, Point, bool);
    ~Triangle();
    void draw();
    Triangle operator*(const int);
protected:

private:
    Point a;
    Point b;
    Point c;
    bool isFull;
};

#endif