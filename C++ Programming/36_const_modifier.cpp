#include <iostream>
#include <vector>

// void print_array(int data[], int size)
// {
//     for(int i = 0; i < size; i++)
//     {
//         data[i]++; // it will modify the original data passed from main becos it decays to a pointer (by reference)
//         std::cout << data[i] << "\t";
//     }
//     std::cout << "\n";
// }

// int main()
// {
//     int data[] = {1, 2, 3};
//     print_array(data, 3);
//     std::cout << data[0] << std::endl; // observe; the function has modified the data

//     return (0);
// }

//=========================================================================================================//

void do_something(int data) // "int data" has to be changed to "const int data" for the print_array call to the
{                           // do_something function to be successful

}

void print_array(const int data[], int size)  // using the "const" keyword
{
    for(int i = 0; i < size; i++)
    {
        // data[i]++; // this won't cos it's const variable nor easily modified
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    // do_something(data); // this can't work, the function expects an "int" as argument not "const int"
}

int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3);
    std::cout << data[0] << std::endl;

    return (0);
}
