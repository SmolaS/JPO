#pragma once

#include "Figure.hpp"

class Circle : public Figure
{
private:
    double m_radius;

public:
    // Konstruktor parametryczny dla Circle
    Circle(double radius, const Point &p) : Figure(p, "circle"), m_radius(radius) {}

    // Obliczenie pola powierzchni koła
    double area() const override
    {
        return 3.14159 * m_radius * m_radius;
    }

    void description() const override
    {
        std::cout << "I have a radius of " << m_radius << std::endl;
        printCentre();
    }
};
