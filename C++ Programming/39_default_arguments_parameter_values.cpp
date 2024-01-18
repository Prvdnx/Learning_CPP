#include <iostream>

struct Rectangle
{
    double length;                                                                                                                                                                                                                                                                                                                                                                                   
    double width;
};

double area(double length, double width) // rectangle
{
    return (length * width);
}

double area(double length) // assuming it's a square; all sides are equal
{
    return (length * length);
}

double area(Rectangle rectangle)
{
    return (rectangle.length * rectangle.width);
}


double power(double base, int pow) // double power(double base, int pow = 2) with this, the function below becomes unnecessary
{
    int total = 1;
    for(int i = 0; 1 < pow; i++)
    {
        total *= base;
    }

    return (total);
}

double power(double base)
{
    return (base * base);
}


int main()
{
    // Rectangle rectangle;
    // rectangle.length = 10;
    // rectangle.width = 10;

    // std::cout << area(rectangle.length, rectangle.width) << std::endl;
    // std::cout << area(rectangle.length) << std::endl;
    // std::cout << area(rectangle) << std::endl;

    std::cout << power(3,3) << std::endl;
    std::cout << power(3) << std::endl;

    return (0);
}
