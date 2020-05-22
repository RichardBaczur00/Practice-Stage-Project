#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include "Point.h"

class Line : public Shape
{
public:
    Line();
    Line(Point a, Point b);
    ~Line();
    void draw();
    Line operator*(const int);
protected:

private:
    
    Point a;
    Point b;
    
};

#endif