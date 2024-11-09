#include <iostream>
#include "Circle.hpp"

int main()
{
    Circle circle(5.0, 2.0, 3.0); // Radius 5.0, center (2.0, 3.0)

    std::cout << "Circle:" << std::endl;
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Center: ";
    circle.getCenter().display();
    std::cout << "Area: " << circle.area() << std::endl;

    // Zmiana promienia
    circle.setRadius(10.0);
    std::cout << "Updated Radius: " << circle.getRadius() << std::endl;
    std::cout << "Updated Area: " << circle.area() << std::endl;

    return 0;
}
