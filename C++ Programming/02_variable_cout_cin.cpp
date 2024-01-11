#include <iostream>


//\\//\\ USING cout << ===============================

// int main() // main function
// {
//     int slices = 5; // declaration and initialisation
//     std::cout << slices;

//     int children = slices;
//     slices = 1000; // this doesn't affect the value already given to children
//     std::cout << children;

//     return (0);
// }
// ---------------------------------------------------------------------------------

// int main() // main function
// {
//     int slices = 10; // declaration and initialisation
//     std::cout << "You have " << slices << " slices of pizza." << std::endl;
//     //printf("%i\n", slices); // a function from C

//     int children = slices;
//     slices = 1000; // this doesn't affect the value already given to children
//     std::cout << children << std::endl;

//     return (0);
// }
// ---------------------------------------------------------------------------------



//\\//\\ USING cin >> ==============================

int main()
{
    int slices;
    std::cout << "Yo fatty, how many pieces of pizza do you want?: ";
    std::cin >> slices;
    std::cout << "You Have " << slices << " slices of pizza." << std::endl;

    return (0);
}


