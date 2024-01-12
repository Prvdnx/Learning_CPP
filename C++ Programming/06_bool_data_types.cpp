#include <iostream>

int main()
{
    // true = 1, -1, 2, all other numbers except 0
    // false = 0;

    bool pizza_is_good = -1;
    std::cout << pizza_is_good << std::endl;

    bool found = false; // 0
    // search algorithm –> if found, found = true;
    std::cout << found << std::endl;
    std::cout << std::boolalpha << found << std::endl;

    found = 1;
    std::cout << std::boolalpha << found << std::endl;
    if(found) std::cout << "This is true" << std::endl;

    return (0);
}