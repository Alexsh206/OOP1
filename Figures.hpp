#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual string type() const = 0; 
};

class Circle : public Shape {
private:
    double radius;
    double x;
    double y;

public:
    Circle(double radius, double x, double y);
    void draw() const override;
    double area() const override;
    double perimeter() const override;
    string type() const override;
};

class Parallelogram : public Shape {
private:
    double base;
    double height;
    double angle;
    double x;
    double y;

public:
    Parallelogram(double base, double height, double angle, double x, double y);
    void draw() const override;
    double area() const override;
    double perimeter() const override;
    string type() const override;
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;

public:
    Triangle(double s1, double s2, double s3, double x1, double y1, double x2, double y2, double x3, double y3);
    void draw() const override;
    double area() const override;
    double perimeter() const override;
    string type() const override;
    string angleType() const;
};

class Pentagon : public Shape {
private:
    double side;
    double x;
    double y;

public:
    Pentagon(double side, double x, double y);
    void draw() const override;
    double area() const override;
    double perimeter() const override;
    string type() const override;
};