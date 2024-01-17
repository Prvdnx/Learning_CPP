#include <iostream>
#include <limits>

void print_array(int array[], int size)
{
    // std::cout << size << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    const int SIZE = 100;
    int guesses[SIZE];
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> guesses[i]) // cin returns -> true if input worked properly
        {
            count++; // keeps track of num of element recieved from input (cin successful)
        }
        else
        {
            break; // if cin recieves invalid character diff from expected (cin unsuccessful)
        }
    }
    print_array(guesses, count);
    std::cin.clear(); // clear cin state in case it returned false and you're about to get another input
    // std::cin.ignore(1000, '\n'); // ignore 1000 character(junks) left in input and print a new line
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore max characters(junks) left
                                                    // in input and print new line (include <limits>)
    std::string test;
    std::cin >> test; // another input
    std::cout << test << std::endl;

    return (0);
}

