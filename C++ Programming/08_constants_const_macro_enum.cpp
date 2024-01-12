#include <iostream>
#define X 10 // macro: another way to declare a Constant (it's global)

int main()
{
    // int x = 5; // literal constant "5"
    const int x = 5; // symbolic Constant (read-only)
    // x = 10; // this gives an error; it cannot be modified

    // const int s; // it has to be declared and initialised at the same time
    // s = 10; // this will give an error

    enum { y = 100 }; // another way to declare a Constant
    // y = 50; // this give an error; cannot be modified

    std::cout << "The consts are " << X << " , " << x << " and " << y << std::endl;

    return (0);
}
