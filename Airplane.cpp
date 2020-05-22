#include "Airplane.h"

//Constructor
Airplane::Airplane()
{
    Point a(20, 40);
    Point b(0, 10);
    Point c(40, 10);
    Point d(0, 0);

    //head construction
    Triangle _head(a, b, c, false);
    this->head = _head;
    //End head

    //Front wings construction
    a.setX(-40);
    a.setY(10);
    b.setX(80);
    b.setY(10);
    c.setX(80);
    c.setY(-20);
    d.setX(-40);
    d.setY(-20);
    Rectangle _wingsFront(a, b, c, d, false);
    this->wingsFront = _wingsFront;
    //End front wings

    //Body construction
    a.setX(0);
    a.setY(-20);
    b.setX(40);
    b.setY(-20);
    c.setX(40);
    c.setY(-80);
    d.setX(0);
    d.setY(-80);
    Rectangle _body(a, b, c, d, false);
    this->body = _body;
    //End body

    //Wings back construction
    a.setX(-20);
    a.setY(-80);
    b.setX(60);
    b.setY(-80);
    c.setX(60);
    c.setY(-100);
    d.setX(-20);
    d.setY(-100);
    Rectangle _wingsBack(a, b, c, d, false);
    this->wingsBack = _wingsBack;
    //End wings back

    //Auxiliaries
    Point _wingCenterLeft(60, -5);
    Point _wingCenterRight(-20, -5);
    Line _frontWingSpliter(Point(-40, 10), Point(80, -20));
    Line _backWingSpliter(Point(-20, -80), Point(60, -100));
    this->wingCenterLeft = _wingCenterLeft;
    this->wingCenterRight = _wingCenterRight;
    this->backWingSpliter = _backWingSpliter;
    this->frontWingSpliter = _frontWingSpliter;
    //End auxiliaries
}
//End constructor

void Airplane::draw()
{
    this->head.draw();
    this->wingsFront.draw();
    this->body.draw();
    this->wingsBack.draw();
    this->wingCenterLeft.draw();
    this->wingCenterRight.draw();
    this->backWingSpliter.draw();
    this->frontWingSpliter.draw();
}