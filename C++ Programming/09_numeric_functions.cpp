#include <iostream>
#include <cmath> // library of mathematical functions

int main()
{
    std::cout << sqrt(25) << std::endl; // get square root
    std::cout << sqrt(-25) << std::endl;
    std::cout << pow(9, 999) << std::endl; // gets power of base no. raise to exponent no.
    std::cout << pow(-9, 999) << std::endl;
    std::cout << remainder(10, 3) << std::endl; // gets the remainder of a division operation
    std::cout << 10 % 3 << std::endl; // modulus operator "%" compared to remainder function
    std::cout << remainder(10, 3.25) << std::endl;
    // std::cout << 10 % 3.25 << std::endl; // doesn't work, hence the remainder functions is better
    std::cout << fmod(10, 3.25) << std::endl; // works quite like the remainder function (rounding vs truncation)
    std::cout << fmax(10, 3.25) << std::endl; // gets highest of 2 arguments passed in (comparison)
    std::cout << fmin(10, 3.25) << std::endl; // gets lowest of 2 arguments passed in (comparison)
    std::cout << ceil(fmin(10, 3.25)) << std::endl; // "ceil" rounds a floating point value
    std::cout << floor(fmin(10, 3.25)) << std::endl; // "floor" crops of the decimal values of a floating point
    std::cout << trunc(fmin(10, 3.25)) << std::endl; // "trunc" works similar to "floor"
    std::cout << trunc(-1.5) << std::endl; // shows the difference between "trunc" and "floor"
    std::cout << floor(-1.5) << std::endl; // diff btw "floor" & "trunc" is only obvious in the negative numbers
                                // "floor" lowers the value while "trunc" crops off what comes after the decimal
    std::cout << ceil(-1.5) << std::endl; // "ceil" gives the same values as "trunc" with negative numbers
    std::cout << round(-1.5) << std::endl; // "round" puts it to whatever value is closest
    std::cout << round(-1.49) << std::endl; // there are other useful rounding function

    // This is some major maths functions, there's a lot more
    // http://en.cppreference.com/w/cpp/numeric/math

    return (0);
}
