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

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.length, rectangle.width) << std::endl;

    std::cout << area(rectangle.length) << std::endl;

    std::cout << area(rectangle) << std::endl;

    return (0);
}
