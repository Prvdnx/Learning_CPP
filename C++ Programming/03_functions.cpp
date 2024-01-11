#include <iostream>
#include <cmath> // to use ath functions

int main()
{
    std::cout << pow(10, 2) << std::endl; // using the pow function

    int base, exponent;
    std::cout << "What is the base?: ";
    std::cin >> base;
    std::cout << "What is the exponent?: ";
    std::cin >> exponent;
    std::cout << pow(base, exponent) << std::endl;

    return (0);
}
