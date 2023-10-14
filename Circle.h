#pragma once
#include "libraries.h"
#include "Shape.h"

class Circle : public Shape
{
private:
    double radius;
public:
    void draw();
    Circle();
    Circle(string color, int size, double radius);
    ~Circle();
};