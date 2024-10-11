#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {

    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    // generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;
    
    int guessedNumber;
    do{
        std::cout << "Guess a number form 1 to 100." << std::endl;
        std::cin >> guessedNumber;
        
        if(guessedNumber<randomNumber) {
            std::cout << "Too low" << std::endl;
        }   else if(guessedNumber>randomNumber) {
            std::cout << "Too high" << std::endl;
        }   else {
            std::cout << "Congrats, good guess!" << std::endl;
        }   
    }  while (guessedNumber != randomNumber);

    return 0;
}