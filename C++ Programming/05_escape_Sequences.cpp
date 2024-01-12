
#include <iostream>
#include <string>

int main()
{
    // There are certain characters that gets interpreted rather than
    // just printed; \n \t \v \b \a \0 \" \% \\ etc...

    std::cout << "Hello\tWorld" << std::endl;
    std::cout << "Hello\nWorld" << std::endl;
    std::cout << "Hello\vWorld" << std::endl;
    std::cout << "Hello \"World\"" << std::endl;
    std::cout << "Hello \\ World" << std::endl;

    return (0);
}

