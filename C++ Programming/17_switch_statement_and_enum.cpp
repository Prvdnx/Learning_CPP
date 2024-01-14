#include <iostream>
#include <string>

int main()
{
    // int age;
    // std::cout << "What is your age?: ";
    // std::cin >> age;
    // switch(age)
    // {
    //     case 13:
    //         std::cout << "Your age id 13. Wow\n";
    //         break;
    //     case 14: 
    //         std::cout << "You're 14\n";
    //         break;
    //     default: 
    //         std::cout << "Catch all\n";
    //         break;
    // }


    // enum seasons{summer, spring, fall, winter};
    // seasons now = winter;
    // switch(now)
    // {
    //     case summer:
    //         break;
    //     case spring:
    //         break;
    //     case fall: 
    //         break;
    //     case winter:
    //         std::cout << "Stay warm!\n";
    //         break;
    // }


    enum class Season{summer, spring, fall, winter};
    Season now = Season::winter;
    switch(now)
    {
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::fall: 
            break;
        case Season::winter:
            std::cout << "Stay warm!\n";
            break;
    }
    return (0);
}
