#include <iostream>
#include <string>

int main()
{
    // // std::cout << "0. Quit\n1. Play Game\n";
    // std::cout << "0. Quit" << std::endl << "1. Play Game\n";
    // int choice;
    // std::cin >> choice;

    // switch(choice)
    // {
    //     case 0:
    //         std::cout << "Thanks for nothing\n";
    //         return 0;
    //     case 1:
    //         std::cout << "yo let's play\n";
    //         break;
    // }

    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl << "1. Play Game\n";
        std::cin >> choice;

        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                std::cout << "yo let's play\n";
                break;
        }
    } while (choice != 0);

    return (0);
}
