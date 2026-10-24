
#pragma once

class Figure
{
public:
    virtual double GetArea() const;
    virtual ~Figure() = default;
};

class Rectangle : public Figure
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);
    double GetArea() const override;
};

class Circle : public Figure
{
private:
    double radius;

public:
    Circle(double r);
    double GetArea() const override;
};

class Triangle : public Figure
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h);
    double GetArea() const override;
};
