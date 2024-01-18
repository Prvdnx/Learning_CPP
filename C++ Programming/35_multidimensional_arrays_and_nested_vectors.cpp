#include <iostream>
#include <vector> // s-std=c++11

int main()
{
    std::vector<std::vector<int>> grades = // nested vector works the same way as a multidimensional array
    //int grades[][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            std::cout << grades[r][c] << "\t";
        }
        std::cout << "\n";
    }

    return (0);
}
