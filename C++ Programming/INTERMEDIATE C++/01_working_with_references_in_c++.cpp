#include <iostream>
#include <vector>

void work(int x)
{
    x++;
}

void work2(int &x)  // Now x is a referenced variable (&x)
{
    x++;
}

void work(std::vector<int> data)
{
    data[0] = 10000;
}

void work2(std::vector<int> &data)  // Now data is a referenced variable (&data)
{
    data[0] = 10000;
}

int main()
{
    // int a = 10;
    // int &b = a;

    // std::cout << a << std::endl << b << std::endl;
    // a = 15;
    // std::cout << &a << std::endl << &b << std::endl;
    // std::cout << a << std::endl << b << std::endl;
    // b = 17;
    // std::cout << a << std::endl << b << std::endl;
    // int c = 100;
    // b = c;
    // std::cout << a << std::endl << b << std::endl;


    int a = 10;
    int &b = a;

    std::cout << a << " " << b << std::endl;
    work(a);
    std::cout << a << " " << b << std::endl;
    work2(a);
    std::cout << a << " " << b << std::endl;

    std::cout << "\n";

    std::vector<int> data = {10, 10, 30, 50, 40, 20, 430, 40, 2};
    std::cout << data[0] << std::endl;
    work(data);
    std::cout << data[0] << std::endl;
    work2(data);
    std::cout << data[0] << std::endl;

    return (0);
}
