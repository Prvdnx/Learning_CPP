#ifndef MATHS_H
# define MATHS_H

#include <iostream>

struct Rectangle
{
    double length;                                                                                                                                                                                                                                                                                                                                                                                   
    double width;
};

double area(double length, double width);

double area(double length);

double area(Rectangle rectangle);

double power(double base, int pow); // double power(double base, int pow = 2) with this, the function below becomes unnecessary

double power(double base);

#endif
