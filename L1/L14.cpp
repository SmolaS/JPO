#include <iostream>

double FtoC(double fahrtemp) 
{
return (fahrtemp - 32) * 5.0 / 9.0;
}

int main(){
    
    double fahrtemp;
    
    
    std::cout << "Enter temperature in Fahrenheit:" << std::endl;
    std::cin >> fahrtemp;

    double celtemp = FtoC(fahrtemp);
    
    std::cout << "Temperature in Celsius: "<< celtemp << std::endl;

}
