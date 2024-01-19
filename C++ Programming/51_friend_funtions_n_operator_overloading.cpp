#include <iostream>
#include <string>

// class User
// {
//     std::string status = "Gold";
//     static int user_count;  // STATIC

//     public:
//         static int get_user_count()  // STATIC
//         {
//             return user_count;
//         }

//         std::string first_name;
//         std::string last_name;
//         std::string get_status()  // THIS IS A GETTER
//         {
//             return status;
//         }

//         void    set_status(std::string status)  // THIS IS A SETTER
//         {
//             if(status == "Gold" || status == "Silver" || status == "Bronze")
//             {
//                 this->status = status;
//             }
//             else
//             {
//                 this->status = "No status";
//             }
//         }

//         User() // DEFAULT CONSTRUCTOR
//         {
//             user_count++;  // STATIC (modifiable with a constructor)
//         }

//         User(std::string first_name, std::string last_name, std::string status) // CONSTRUCTOR
//         {
//             this->first_name = first_name;
//             this->last_name = last_name;
//             this->status = status;
//             user_count++;  // STATIC (modifiable with a constructor)
//         }

//         ~User() // DESTRUCTOR
//         {
//             user_count--;  // STATIC (modifiable within a destructor)
//         }

//         friend void output_status(User user);  //====> NEW FRIEND FUNCION /////////////
// };

// int User::user_count = 0;  // STATIC data member can only be initialised outside the class


// void output_status(User user)  //====> NEW FRIEND FUNCION ///////////// (Pretend we don't already have Getters & Setters)
// {
//     std::cout << user.status << std::endl;
// }

// std::ostream& operator << (std::ostream& output, const User user)  //====> EXTRACTION OPERATOR <====//
// {
//     output << "First name: " << user.first_name << "\nLast name: " << user.last_name; 
//     return (output);
// }

// std::istream& operator >> (std::istream &input, User &user)  //====> INSERTION OPERATOR <====//
// {
//     input >> user.first_name >> user.last_name; 
//     return (input);
// }


// int main()
// {
//     User user;    // DEFAULT CONSTRUCTOR
//     output_status(user);
//     // std::cout << user.output_status() << std::endl; // wont't work because output_status (stands alone) is not defined inside of user object

//     return (0);
// }

class User
{
    std::string status = "Gold";
    static int user_count;  // STATIC

    public:
        static int get_user_count()  // STATIC
        {
            return user_count;
        }

        std::string first_name;
        std::string last_name;
        std::string get_status()  // THIS IS A GETTER
        {
            return status;
        }

        void    set_status(std::string status)  // THIS IS A SETTER
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "No status";
            }
        }

        User() // DEFAULT CONSTRUCTOR
        {
            user_count++;  // STATIC (modifiable with a constructor)
        }

        User(std::string first_name, std::string last_name, std::string status) // CONSTRUCTOR
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++;  // STATIC (modifiable with a constructor)
        }

        ~User() // DESTRUCTOR
        {
            user_count--;  // STATIC (modifiable within a destructor)
        }

    friend std::ostream& operator << (std::ostream &output, const User user);  //====> EXTRACTION OPERATOR as a FRIEND FUNCION ////////
    friend std::istream& operator >> (std::istream &output, User &user);  //====> INSERTION OPERATOR as a FRIEND FUNCION ////////
};

int User::user_count = 0;  // STATIC data member can only be initialised outside the class

std::ostream& operator << (std::ostream& output, const User user)  //====> EXTRACTION OPERATOR <====//
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << 
        "\nStatus: " << user.status;  //====> Access and print the status (private data) with friend function ////////
    return (output);
}

std::istream& operator >> (std::istream &input, User &user)  //====> INSERTION OPERATOR <====//
{
    input >> user.first_name >> user.last_name >> user.status;
    return (input);
}


int main()
{
    User user;    // DEFAULT CONSTRUCTOR
    // user.first_name = "George";
    // user.last_name = "Eliot";
    // user.set_status("Gold");
    std::cin >> user;
    std::cout << user << std::endl;
    
    return (0);
}