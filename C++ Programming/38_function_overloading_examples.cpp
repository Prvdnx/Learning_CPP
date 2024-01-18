#include <iostream>
#include <string>

// Overloading is creating multiple versions of the same functions

void    swap(int &a, int &b) //==== passed by reference; modifies the original data in main function
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}

void    swap(std::string &a, std::string &b) //==== passed by reference; modifies the original data in main function
{
    std::string temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    std::string first_name = "Caleb";
    std::string last_name = "Curry";

    swap(first_name, last_name);
    std::cout << first_name << " " << last_name << std::endl;

    std::cout << "a: " << a << "\tb: " << b << "\n";

    return (0);
}
