#include <iostream>
#include <climits>

int main()
{
    short a; // 16 bits  (1 byte is 8 bits)
    int b; // at least 16 bits but usually 32
    long c; // at least 32 bits
    long long d; // at least 64 bits

    // short <= int <= long <= long long

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    std::cout << sizeof(long long) << std::endl;
    std::cout << sizeof(long long) << std::endl; // <climits>

    return (0);
}
