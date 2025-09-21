#include <iostream>

/* i wrote this with this tutorial: https://youtu.be/7bTZrFGRqGM?si=veK-u4BFiOzYuOps*/

int main() {

    double temp;
    char unit;

    std::cout << "*_____temparture converstion *______ \n";
    std::cout << "F = Farenheight \n";
    std::cout << "C = Celcius \n" ;
    std::cout << "waht unit would U like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Farenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please Enter only C or F \n";
    }

    std::cout << "***************************";


    return 0;
}