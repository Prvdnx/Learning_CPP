#include <iostream>
#include <string>

int main()
{
    std::string name_answer = "Prince";
    std::string name_guess;
    int age_answer = 53; 
    std::cout << "Guess my name!: ";
    std::cin >> name_guess;

    int age_guess;
    std::cout << "Guess my age!: ";
    std::cin >> age_guess;  

    // && is the AND Operator, || is the OR Operator, ! is the NOT/Negation Operator
    // == "equal to" Operator, != not equal to, < > less than & greater than, <= >= less the or equal to & greater than or equal to
    
    // if(name_guess == name_answer && age_guess == age_answer) // Using && operator ====
    // {
    //     std::cout << "You got it right!\n";
    // }
    //             /// OR ///
    // if(name_guess == name_answer) // Using && operator
    // {
    //     if(age_guess == age_answer)
    //     {
    //         std::cout << "You got it right!\n";
    //     }
    // }



    // if(name_guess == name_answer || age_guess == age_answer) // Using || operator ====
    // {
    //     std::cout << "You got it right!\n";
    // }



    if(!(name_guess == name_answer)) // OR // if(name_guess != name_answer)  // Using ! operator ====
    {
        std::cout << "You got it right!\n";
    }

    return (0);
}
