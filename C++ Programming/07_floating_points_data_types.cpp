#include <iostream>
#include <float.h> // Tools to help tell how many digits of floating point output is trustworthy

int main()
{
    //float a = 10.0 / 3;
    double a = 10.0 / 3;
    a = a * 1000000000000;
    double b = 7.7E4; //  77000   7.7E4   7.7 x 10^4
    long double c;

    std::cout << b << std::endl; // double
    std::cout << a << std::endl; // float
    std::cout << std::fixed << a << std::endl; // float
    std::cout << FLT_DIG << std::endl; // from <float.h> It tells how many first digits of
    std::cout << DBL_DIG << std::endl; // recent floating point output is trustworthy
    std::cout << LDBL_DIG << std::endl;

    return (0);
}
