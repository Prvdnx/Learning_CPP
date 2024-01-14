#include <iostream>
#include <string>

int main()
{
    //\\//\\ for_loop ====================================

    // for(int i = 0; i < 10; i++)
    // {
    //     std::cout << i << std::endl;
    // }
    // return (0);

    // for(int i = 9; i >= 0; i--)
    // {
    //     std::cout << i << std::endl;
    // }

    // int factorial = 5;      // 5 * 4 * 3 * 2 * 1
    // for(int i = factorial - 1; i > 1; i--)
    // {
    //     factorial = factorial * i;
    // }
    // std::cout << "factorial: " << factorial << std::endl;



    //\\//\\ while_loop ====================================
        
        // int i = 0;
        // while (i <  10)
        // {
        //     std::cout << i << std::endl;
        //     i++;
        // }

        // int i = 10;
        // while (i >= 1)
        // {
        //     std::cout << i << std::endl;
        //     i--;
        // }
        
        int factorial = 5;      // 5 * 4 * 3 * 2 * 1
        int i = factorial - 1;
        while (i > 1)
        {
            factorial *= i;
            i--;
        }
        std::cout << factorial << std::endl;

        return (0);
}
