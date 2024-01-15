#include <iostream>
#include <string>

int main()
{
    int answer = 11;
    std::cout << "Guess the number: ";
    int guess;
    std::cin >> guess;
    // int points;

    // if(guess == answer) // Normal Conditional
    // {
    //     points = 10;
    // }

    // points = guess == answer ? 10 : 0; // TENARY CONDITIONAL OPERATOR <<<<<<========

    // std::cout << points << std::endl;

    guess == answer ? std::cout << "Good job\n" : std::cout << "Bad job\n"; // TENARY CONDITIONAL OPERATOR <<<<<<========

    return (0);
}
