#include "libraries.h"
#include "Shape.h"
#include "Circle.h"

int main()
{
    Circle* c1 = new Circle("Blue",5,2.5);
    c1->draw();
    delete c1;

    return 0;
}