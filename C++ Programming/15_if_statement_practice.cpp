#include <iostream>

int main()
{
    int age = 11;

    // if(age < 13)
    // {
    //     std::cout << "You're not old enough\n";
    //      // return (-1); //ends the program
    // }


    // if(age > 13)
    // {
    //     std::cout << "You're old enough\n";
    //     // return (0) //ends the program
    // }
    // std::cout << "Always\n";


    // age = 111;
    // if(age < 13)
    // {
    //     std::cout << "You're not old enough\n";
    // }
    // else
    // {
    //     std::cout << "False\n";
    // }


    // age = 15;
    // if(age < 13)
    // {
    //     std::cout << "You're not old enough\n";
    // }
    // else if(age < 19)
    // {
    //     std::cout << "You're almost 19\n";
    // }
    // else
    // {
    //     std::cout << "False\n";
    // }


    std::cout << "How old are you: ";
    int age2;
    std::cin >> age2;
    if(age2 < 13)
    {
        std::cout << "You're not old enough\n";
    }
    else if(age2 < 19)
    {
        std::cout << "You're almost 19\n";
    }
    else
    {
        std::cout << "False\n";
    }

    return (0);
}
