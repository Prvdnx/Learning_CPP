#include <iostream>
#include <vector>

//\\//\\ CREATING A VECTOR ===================================

// int main()
// {
//     std::vector<int> data = {1, 2, 3};
//     data.push_back(12); // add an element {12} at the back
//     std::cout << data[3] << std::endl;
//     std::cout << data[data.size() - 1] << std::endl; // print the last element
//     data.pop_back(); // remove the last element (at the back)
//     std::cout << data[data.size() - 1] << std::endl; // print the last element

//     return (0);
// }

// visit: https://www.geeksforgeeks.org/vector-in-cpp-stl/



//\\//\\ PASSING VECTORS TO FUNCTIONS =========================

// void print_vector(std::vector<int> data)
// {
//     for(int i = 0; i < data.size(); i++)
//     {
//         std::cout << data[i] << "\t";
//     }
//     std::cout << "\n";
// }

// void print_vector(std::vector<int> data)
// {
//     data.push_back(12); // this doesn't affect the data passed in from the main function
//     for(int i = 0; i < data.size(); i++)
//     {
//         std::cout << data[i] << "\t";
//     }
//     std::cout << "\n";
// }

void print_vector(std::vector<int> &data) // pass by reference; it affects the real data passed from main
{
    data.push_back(12);
    for(int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);

    return (0);
}