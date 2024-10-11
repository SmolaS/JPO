//Program pobierajacy od użytkownika kolejno 5 liczb, które zostaną wpisane do 5-elementowej tablicy, a następnie wypisze te liczby
//Pobieranie oraz wypisanie liczb powinno zostać zaimplementowane w pętli
#include <iostream>

    int main() {

        int size = 5;
        int numbers[size];
        
        for (int i = 0; i < size; i++) { 
            std::cout << "Enter each number: "<< std::endl; 
            std::cin >> numbers[i]; 
        }   
        std::cout << "Numbers in array: " << std::endl;

        for (int i = 0; i < size; i++) {
            std::cout << numbers[i] << " ";
        }
  
    }
