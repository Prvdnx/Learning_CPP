#include <iostream>

// int main()
// {
//     int x = 5;
//     int *y = &x;

//     std::cout << &x << std::endl;
//     std::cout << x << " " << *y << std::endl;
//     x = 6;
//     std::cout << x << " " << *y << std::endl;
//     *y = 7;
//     std::cout << x << " " << *y << std::endl;
//     int z = 10;
//     y = &z; 
//     std::cout << x << " " << *y << std::endl;
//     x = 5;
//     *y = 60;
//     std::cout << x << " " << *y << " " << z << std::endl;

//     return (0);
// }

void change(int x)
{
    x = 10;
}

void change(int *x)  // x is a pointer variable
{
    *x = 10;
}

int main()
{
    int x = 5;
    change(x);
    std::cout << x << std::endl;
    change(&x);  // uses the function with pointer variable
    std::cout << x << std::endl;

    int *x2 = new int(5);  // new keyword has to  be used with a pointer variable
    change(x2);  // uses the function with pointer variable
    std::cout << "x2: " << x << std::endl;
    delete (x2);  // freeing variable of the "new" keyword because it new uses malloc

    return (0);
}
