#include "Figure.h"

double Figure::GetArea() const
{
    return 0;
}

Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}

double Rectangle::GetArea() const
{
    return width * height;
}

Circle::Circle(double r)
{
    radius = r;
}

double Circle::GetArea() const
{
    return 3.14159 * radius * radius;
}

Triangle::Triangle(double b, double h)
{
    base = b;
    height = h;
}

double Triangle::GetArea() const
{
    return base * height / 2;
}
