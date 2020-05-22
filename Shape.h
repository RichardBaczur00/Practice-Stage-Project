#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include "EngineGlut.h"

class Shape
{
public:
    virtual void draw();
protected:
    EngineGlut e;
private:

};

#endif