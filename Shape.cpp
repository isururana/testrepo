#include "Shape.h"

Shape::Shape()
{
    this->color = "";
    this->size = 0;
}
Shape::Shape(string color, int size)
{
    this->color = color;
    this->size = size;
}

string Shape::getColor()
{
    return this->color;
}

int Shape::getSize()
{
    return this->size;
}

void Shape::draw()
{
    cout<<"Drawing a Shape"<<endl;
}

Shape::~Shape()
{
}