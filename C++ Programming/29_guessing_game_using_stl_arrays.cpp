#include <iostream>
#include <ctime>
#include <array>

void print_array(std::array<int, 251> array, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
}

void play_game()
{
    std::array<int, 251> guesses;
    int count = 0;

    std::cout << "Game is being played!\n";
    int random = rand() % 251;
    // std::cout << random << std::endl;
    std::cout << "Guess a number: ";

    while(true)
    {
        int guess;
        std::cin >> guess;

        guesses[count++] = guess;
        if(guess == random)
        {
            std::cout << "You win!\n";
            break;
        }
        else if(guess < random)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "Too high\n";
        }
    }
    print_array(guesses, count);
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
