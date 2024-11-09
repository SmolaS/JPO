#include <iostream>

class Point
{
private:
    double x;
    double y;

public:
    Point(double polex, double poley) : x(polex), y(poley) {}

    double getX() const
    {
        return x;
    }

    void setX(double polex)
    {
        x = polex;
    }

    double getY() const
    {
        return y;
    }

    void setY(double poley)
    {
        y = poley;
    }

    void display() const
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};