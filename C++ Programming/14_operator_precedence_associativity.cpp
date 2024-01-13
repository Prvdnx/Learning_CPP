#include <iostream>

int main()
{
// Operator: "+" add, "-" subtract, "*" multiply, "%" modulus (divide & keep remainder), "/" division

    int x = 5 + 5;
    std::cout << x << std::endl;

    x = 5 - 5;
    std::cout << x << std::endl;

    x = 5 * 5;
    std::cout << x << std::endl;

    x = 10 / 4;
    std::cout << x << std::endl;

    x = 10 % 4;
    std::cout << x << std::endl;

    double x2 = 10 / 4;
    std::cout << x2 << std::endl;
    x2 = 10. / 4;
    std::cout << x2 << std::endl;

    x2 = 10 + (4.0 / 3); // precedence
    x2 = (10 * 4) * 3; // associativity
    // https://en.cppreference.com/w/cpp/language/operator_precedence
    double y;
    double z;
    y = 10;
    z = (y = 100);
    std::cout << y << "\t" << z << std::endl;
    y = 10;
    (z = y) = 100;
    std::cout << y << "\t" << z << std::endl;

    return (0);
}
