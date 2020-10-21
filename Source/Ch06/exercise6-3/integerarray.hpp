#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

class IntegerArray
{
private:
    int numbers[100];
    int max = 0;
    int min = 0;
    int length = 0;

public:
    int getLength(void) const;
    int getMax(void) const;
    int getMin(void) const;
    int getElement(int i) const;
    void setElement(int i, int v);
    void addElement(int v);
    void printAll(void) const;
};

#endif