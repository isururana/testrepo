#pragma once
#include "libraries.h"

class Shape
{
protected:
    string color;
    int size;
public:
    Shape();
    Shape(string color, int size);

    string getColor();
    int getSize();
    void setColor(string color);
    void setSize(int size);

    virtual void draw();

    ~Shape();
};
