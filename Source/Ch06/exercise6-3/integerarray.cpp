#include <iostream>
#include "integerarray.hpp"
using namespace std;

int IntegerArray::getLength(void) const
{
    return length;
}
int IntegerArray::getMax(void) const
{
    return max;
}
int IntegerArray::getMin(void) const
{
    return min;
}
int IntegerArray::getElement(int i) const
{
    if (i < length)
        return numbers[i];
    return -1;
}
void IntegerArray::setElement(int i, int v)
{
    if (i < length)
    {
        numbers[i] = v;
        if (max < v)
            max = v;
        if (min > v)
            min = v;
    }
}
void IntegerArray::addElement(int v)
{
    if (length == 100)
        return;
    numbers[length] = v;
    if (max < v || length == 0)
        max = v;
    if (min > v || length == 0)
        min = v;
    length += 1;
}
void IntegerArray::printAll(void) const
{
    for (int i = 0; i < length; i++)
        cout << numbers[i] << "\t";
    cout << endl;
}