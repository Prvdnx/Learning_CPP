#include <iostream>

void print_array(int array[], int size)
{
    std::cout << size << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
}

int main()
{
    int guesses[] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses, size);
    std::cout << "\n";

    return (0);
}

