#include <iostream>
#include <algorithm>

int main() {

    std::string input;
    std::cout << "Enter a string: " << std::endl;
    std::getline(std::cin, input);

    std::string temp = input;
    bool palindrome = true;
    for (int i = 0, j = temp.size() - 1; i < j; i++, j--) {
        if (temp[i] != temp[j]) {
            palindrome = false;
            break;
        }
    }
    std::cout << "Manually checked: " << (palindrome ? "Palindrome" : "Not a palindrome") << std::endl;

    std::string stdReverse = input;
    std::reverse(stdReverse.begin(),stdReverse.end());
    bool isPalindromeStd = ( temp == stdReverse);
    std::cout << "Std reversed checked: " << (isPalindromeStd ? "Palindrome" : "Not a palindrome") << std::endl;

    return 0;
}