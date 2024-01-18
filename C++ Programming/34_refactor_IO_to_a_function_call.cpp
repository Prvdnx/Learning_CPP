#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(int guess_count)
{
    std::ifstream input("33-best_score.txt");
    if(!input.is_open())
    {
        std::cout << "Unable to open file\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("33-best_score.txt");
    if(!output.is_open())
    {
        std::cout << "Unable to open file\n";
        return;
    }

    if(guess_count < best_score)
    {
        output << guess_count;
    }
    else
    {
        output << best_score;
    }
}

void print_vector(std::vector<int> vector)
{
    for(int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << "\n";
}

void play_game()
{
    std::vector<int> guesses;
    std::cout << "Game is being played!\n";
    int random = rand() % 251;
    int count = 0;
    // std::cout << random << std::endl; //
    std::cout << "Guess a number: ";

    while(true)
    {
        int guess;
        std::cin >> guess;
        count++;

        guesses.push_back(guess);
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
    save_score(count);
    print_vector(guesses);
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

