#ifndef AIRPLANE_H_INCLUDED
#define AIRPLANE_H_INCLUDED

#include "Rectangle.h"

class Airplane
{
public:
    Airplane();
    void draw();
protected:

private:
    Triangle head;
    Rectangle wingsFront;
    Rectangle body;
    Rectangle wingsBack;
    Point wingCenterRight;
    Point wingCenterLeft;
    Line backWingSpliter;
    Line frontWingSpliter;
};

#endif