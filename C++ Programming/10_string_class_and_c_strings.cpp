#include <iostream>
#include <string>

int main()
{
    std::string greeting = "Hello";
    std::cout << greeting[0] << std::endl;
    std::cout << greeting + " there" << std::endl;

    std::string complete_greeting = greeting + " there";
    std::cout << complete_greeting << std::endl;

    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;

    std::cout << complete_greeting.length() << std::endl; // method == member functions == functions attached to objects

    char name[] = "Prince"; // C string == array of characters "Prince\0"
    // name = "Ezekiellll"; // error: it work cos C strings are limited to size of initial value "Prince\0"
    // name = "t"; // error: this won't work also

    complete_greeting = "Go away"; // reassignment works fine unlike a C string which is more complicated

    std::string greeting2;
    std::cin >> greeting2; // "cin" is limited; it only grabs the word (for example, enter "Hello World")
    std::cout << greeting2 << std::endl; // it will only output "Hello". But there's an alternative

    return (0);
}
