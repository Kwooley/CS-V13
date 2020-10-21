#include "rectangle.h"
#include <iostream>

void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setHeight(double h)
{
    height = h;
}
double Rectangle::getWidth(void) const
{
    return width;
}
double Rectangle::getHeight(void) const
{
    return height;
}
double Rectangle::getArea(void) const
{
    return width * height;
}
