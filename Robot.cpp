#include "Robot.h"

Robot::Robot()
{
    Point a(0, 0), b(0, 5), c(-25, 55), d(-25, 5);
    this -> neck = Line(a, b);
    a.setX(25);
    a.setY(5);
    b.setX(25);
    b.setY(55);
    this -> head = Rectangle(c, d, a, b, false);
    this -> eye1 = Point(-13, 30);
    this -> eye2 = Point(13, 30);
    a.setX(0);
    a.setY(30);
    b.setX(-4);
    b.setY(20);
    c.setX(4);
    c.setY(20);
    this -> nose = Triangle(a, b, c, false);
    a.setX(-13);
    a.setY(15);
    b.setX(13);
    b.setY(15);
    this -> mouth = Line(a, b);
    a.setX(-25);
    a.setY(0);
    b.setX(a.getX() + 50);
    b.setY(a.getY());
    c.setX(a.getX() + 50);
    c.setY(a.getY() - 100);
    d.setX(a.getX());
    d.setY(a.getY() - 100);
    this -> body = Rectangle(a, b, c, d,false);
    a.setX(-25);
    a.setY(-5);
    b.setX(-50);
    b.setY(-70);
    this -> leftArm = Line(a, b);
    a.setX(25);
    a.setY(-5);
    b.setX(50);
    b.setY(-70);
    this -> rightArm = Line(a, b);
    a.setX(-15);
    a.setY(-100);
    b.setX(-15);
    b.setY(-150);
    this -> leftLeg = Line(a, b);
    a.setX(15);
    a.setY(-100);
    b.setX(15);
    b.setY(-150);
    this -> rightLeg = Line(a, b);
}

Robot::~Robot()
{
    //dtor
}

void Robot::draw() {
    this -> head.draw();
    this -> neck.draw();
    this -> eye1.draw();
    this -> eye2.draw();
    this -> nose.draw();
    this -> mouth.draw();
    this -> body.draw();
    this -> leftArm.draw();
    this -> rightArm.draw();
    this -> leftLeg.draw();
    this -> rightLeg.draw();
}
