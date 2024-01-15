#include <iostream>
#include <string>

void play_game()
{
    std::cout << "Game is being played!\n";
}

int main()
{
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
                play_game();
                break;
        }
    } while (choice != 0);

    return (0);
}
