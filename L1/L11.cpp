 //Program pobierający liczbę od użytkownika i wypisujący w pętli wszystkie liczby od 0 do tej konkretnej liczby + wypisze sumę tych liczb
// jeśli podana liczba jest ujemna, program ma wyświetlić odpowiedni komunikat i zakończyć działanie

#include <iostream>

    int main() {

        int number;
        int sum;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> number;
        
        if (number < 0) {
        std::cout << "This number is negative." << std::endl;
        } 
        else {
            for (int i = 0; i <= number; i++) {
            std::cout << i << " ";
            sum += i;
            }
            std::cout << std::endl;
            std::cout << "Sum is: " << sum << std::endl;
        }
    }
