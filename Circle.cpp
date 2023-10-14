#include "Circle.h"

void Circle::draw()
{
    cout<<"Drawing a circle"<<endl;
}

Circle::Circle(string color, int size, double radius):Shape(color,size)
{
    this->radius = radius;
}

Circle::Circle()
{

}
Circle::~Circle()
{
}
