#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int width;
    int height;

public:
    void setWidth(double);
    void setHeight(double);
    double getWidth(void) const;
    double getHeight(void) const;
    double getArea(void) const;
};

#endif
