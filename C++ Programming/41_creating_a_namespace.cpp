#include <iostream>

namespace utilz
{
    void print_array(const int data[], int size)
    {
        for(int i = 0; i < size; i++)
        {
            std::cout << data[i] << "\t";
        }
        std::cout << "\n";
    }
}

// using namespace utilz;

int main()
{
    int data[] = {1, 2, 3};
    utilz::print_array(data, 3);  // without including "using namespace utilz;"
    // print_array(data, 3);  // must include "using namespace utilz;"
    std::cout << data[0] << std::endl;

    return (0);
}
