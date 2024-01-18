#include <iostream>

// void    swap(int a, int b) //==== passed by value; doesn't modify the original data in main function
// {
//     int temp = a;
//     a = b;
//     b = temp;

//     std::cout << "a: " << a << "\tb: " << b << "\n";
// }

void    swap(int &a, int &b) //==== passed by reference; modifies the original data in main function
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";

    return (0);
}
