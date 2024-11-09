#include <iostream>
#include "Point.hpp"

int main()
{

    Point point(6.1, 7.2);

    std::cout << "Coordinates: ";
    point.display();

    // Point change
    point.setX(5.1);
    point.setY(6.2);

    std::cout << "Updated coordinates: ";
    point.display();
};