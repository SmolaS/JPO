#include <iostream>

int main()
{

    std::string sentence;
    std::cout << "Enter a sentence: " << std::endl;
    std::getline(std::cin, sentence);

    char character;
    std::cout << "Enter the character to count: " << std::endl;
    std::cin >> character;

    int count = 0;

    for (char c : sentence)
    {
        if (tolower(c) == tolower(character))
        {
            count++;
        }
    }

    std::cout << "This character appears " << count << " times in the sentence." << std::endl;

    return 0;
}