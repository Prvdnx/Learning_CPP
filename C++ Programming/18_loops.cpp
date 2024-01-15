#include <iostream>
#include <string>

int main()
{
    //\\//\\ For_Loop ============================================== ////////////////

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



    //\\//\\ While_Loop ============================================ ////////////////
        
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


    // int factorial = 5;      // 5 * 4 * 3 * 2 * 1
    // int i = factorial - 1;
    // while (i > 1)
    // {
    //     factorial *= i;
    //     i--;
    // }
    // std::cout << factorial << std::endl;



    //\\//\\ Do_While_Loop =========================================== ////////////////

    // std::string password = "hellotacos123";
    // std::string guess;
    // do
    // {
    //     std::cout << "Guess the password ";
    //     std::cin >> guess;
    // } while (guess != password);
    


    //\\//\\ Break_And_Continue ====================================== ////////////////

    std::string sentence = "Hello my name is Caleb";
    for(int i = 0; i < sentence.size(); i++)
    {
        // std::cout << sentence[i] << std::endl;
        // if(sentence[i] == 'o')
        // {
        //     std::cout << "found o!" << std::endl;
        //     break; // BREAK <<<<<<<<<<============
        // }

        if(sentence[i] == ' ')
        {
            continue; // CONTINUE <<<<<<<<==========
        }
        std::cout << sentence[i] << std::endl;
    }
    std::cout << "\nDone!\n";

    return (0);
}
