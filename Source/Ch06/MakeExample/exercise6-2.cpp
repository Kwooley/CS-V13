#include <iostream>
#include "rectangle.hpp"
using namespace std;

int main()
{
    Rectangle box;

    box.setWidth(10.0);
    box.setHeight(20.0);
    cout << "The rectangle box's Area: " << box.getArea() << endl;
}
