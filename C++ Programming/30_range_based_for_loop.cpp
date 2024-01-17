#include <iostream>
#include <array>

// void test(int data[])  // This won't work for stl array
// {
//     for(int n : data)
//     {
//         std::cout << n << "\t";
//     }
// }

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6};

    ////==== Normal for loop ////====
    // for(int i = 0; i < 6; i++)
    // {
    //     std::cout << data[i] << "\t";
    // }
    // std::cout << "\n";

    ////==== Range based for loop ////====
    for(int n : data) // temp variable for individual element of the array : and the array itself
    {
        std::cout << n << "\t";
    }
    std::cout << "\n";
    // This also works for vectors and stl arrays
    // It doesn't work inside a function when using stl array e.g
    // std::array<int, 60> data = {1, 2, 3, 4, 5, 6}; //
    // test(data); //

    return (0);
}
