#include <iostream>
#include <algorithm>

int main() {

    std::string input;
    std::cout << "Enter a string: " << std::endl;
    std::getline(std::cin, input);
 
    std::string manualReverse = input;
    for (int i = 0, j = manualReverse.size() - 1; i < j; i++, j--) {
        std::swap(manualReverse[i], manualReverse[j]);
    }
    std::cout << "Manual reversed string: " << manualReverse << std::endl;

    std::string stdReverse = input;
    std::reverse(stdReverse.begin(),stdReverse.end());
    std::cout << "Std reversed string: " << stdReverse<< std::endl;

    return 0;
}
