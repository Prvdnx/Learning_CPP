#include <iostream>
#include <string>

int main()
{
    int number = 30; // decimal: thirty
    std::cout << number << std::endl;
    // std::cout << std::hex << number << std::endl; // print it in hexadecimal
    // std::cout << std::oct << number << std::endl; // print it in octal

    number = 0x30; // hexadecimal: fourty eight
    std::cout << number << std::endl;

    number = 030; // octal: twenty four
    std::cout << number << std::endl;

    return (0);
}
