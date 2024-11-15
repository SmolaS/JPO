#include <iostream>
#include "ComplexNumber.hpp"

int main()
{
    ss::jpo::ComplexNumber c1(4.0, 5.0);
    ss::jpo::ComplexNumber c2(4.0, -8.0);
    ss::jpo::ComplexNumber c3;

    // Test +
    c3 = c1 + c2;
    std::cout << "c1 + c2 = " << c3 << std::endl;

    // Test +=
    c2 += c1;
    std::cout << "c2 += c1 -> " << c2 << std::endl;

    // Test -
    c3 = c1 - c2;
    std::cout << "c1 - c2 = " << c3 << std::endl;

    // Test -=
    c2 -= c1;
    std::cout << "c2 -= c1 -> " << c2 << std::endl;

    // Test *
    c3 = c1 * c2;
    std::cout << "c1 * c2 = " << c3 << std::endl;

    // Test *=
    c2 *= c1;
    std::cout << "c2 *= c1 -> " << c2 << std::endl;

    // Test /
    c3 = c1 / c2;
    std::cout << "c1 / c2 = " << c3 << std::endl;

    // Test /=
    c2 /= c1;
    std::cout << "c2 /= c1 -> " << c2 << std::endl;

    // Test comparison
    std::cout << "Czy c1 == c2? " << (c1 == c2 ? "Tak" : "Nie") << std::endl;
    std::cout << "Czy c1 != c2? " << (c1 != c2 ? "Tak" : "Nie") << std::endl;

    // Test double
    double someNumber = 13.3;
    c1 += someNumber;
    std::cout << "c1 += " << someNumber << " -> " << c1 << std::endl;

    return 0;
}