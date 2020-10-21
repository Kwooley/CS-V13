#include <iostream>
#include "integerarray.hpp"
using namespace std;

int main()
{
    IntegerArray N1;

    cout << "The length is: " << N1.getLength() << endl;

    N1.addElement(10);
    N1.addElement(20);
    N1.addElement(30);
    N1.addElement(40);

    cout << "The length is: " << N1.getLength() << endl;
    N1.printAll();

    N1.setElement(2, 50);
    N1.setElement(1, 99);
    N1.printAll();

    N1.addElement(100);
    N1.printAll();
    cout << "The max is: " << N1.getMax() << endl;
    cout << "The min is: " << N1.getMin() << endl;
}