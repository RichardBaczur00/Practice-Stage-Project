#include <iostream>
#include <unistd.h>
#include <math.h>
#include "Shape.h"
#include "EngineGlut.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Airplane.h"

int main(int argc, char ** argv)
{
    //init
    initEngineGlut(argc, argv);

    Airplane a;
    a.draw();
    std::cin.ignore();
}
