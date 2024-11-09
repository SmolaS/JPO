#include <iostream>
#include "Point.hpp"

class Circle
{
private:
    double *radius;
    Point center;

public:
    Circle(double r, double x, double y) : center(x, y)
    {
        radius = new double;
        *radius = r;
    }
    double getRadius() const
    {
        return *radius;
    }

    void setRadius(double r)
    {
        *radius = r;
    }

    Point getCenter() const
    {
        return center;
    }

    void setCenter(const Point &p)
    {
        center = p;
    }

    double area() const
    {
        return 3.14159 * (*radius) * (*radius);
    }

    ~Circle()
    {
        delete radius;
    }
};