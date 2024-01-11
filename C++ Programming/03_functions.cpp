#include <iostream>
#include <cmath> // to use math functions

// int main()
// {
//     std::cout << pow(10, 2) << std::endl; // using the pow function

//     int base, exponent;
//     std::cout << "What is the base?: ";
//     std::cin >> base;
//     std::cout << "What is the exponent?: ";
//     std::cin >> exponent;
//     std::cout << pow(base, exponent) << std::endl;
//     double power = pow(base, exponent);
//     std::cout << power << std::endl;

//     return (0);
// }



//\\//\\ CUSTOM FUNCTIONS ===================================

double power(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return (result);
}

// int main()
// {
//     std::cout << power(10, 2) << std::endl;

//     int base, exponent;
//     std::cout << "What is the base?: ";
//     std::cin >> base;
//     std::cout << "What is the exponent?: ";
//     std::cin >> exponent;
//     std::cout << power(base, exponent) << std::endl;
//     double myPower = power(base, exponent);
//     std::cout << myPower << std::endl;

//     return (0);
// }



//\\//\\ VOID FUNCTIONS ===================================

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    std::cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
    std::cout << myPower << std::endl;
}

int main()
{
    int base, exponent;

    std::cout << "What is the base?: ";
    std::cin >> base;
    std::cout << "What is the exponent?: ";
    std::cin >> exponent;
    print_pow(base, exponent);
    print_pow(100, 4);
    print_pow(4, 2);

    return (0);
}
