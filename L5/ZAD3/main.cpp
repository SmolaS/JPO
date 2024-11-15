#include <iostream>
#include "ComplexNumber.hpp"
#include <type_traits>

int main()
{
    ss::jpo::ComplexNumber<int> c1(4, 5);
    ss::jpo::ComplexNumber<float> c2(4.0f, -8.0f);
    ss::jpo::ComplexNumber<double> c3(3.5, 7.5);

    std::cout << "c1 (int): " << c1 << std::endl;
    std::cout << "c2 (float): " << c2 << std::endl;
    std::cout << "c3 (double): " << c3 << std::endl;

    c3 += 2.5;
    std::cout << "c3 += 2.5 -> " << c3 << std::endl;

    c1 = c1 + ss::jpo::ComplexNumber<int>(2, 3);
    std::cout << "c1 + ComplexNumber<int>(2, 3) = " << c1 << std::endl;

    return 0;
}
