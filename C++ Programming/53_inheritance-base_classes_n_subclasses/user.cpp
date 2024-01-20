
#include "user.hpp"


        int User::get_user_count()  // STATIC
        {
            return user_count;
        };

        std::string User::get_status()  // THIS IS A GETTER
        {
            return status;
        }

        void User::set_status(std::string status)  // THIS IS A SETTER
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

        User::User() // DEFAULT CONSTRUCTOR
        {
            std::cout << "User created\n";
            user_count++;  // STATIC (modifiable with a constructor)
        }

        User::User(std::string first_name, std::string last_name, std::string status) // CONSTRUCTOR
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++;  // STATIC (modifiable with a constructor)
        }

        User::~User() // DESTRUCTOR
        {
            user_count--;  // STATIC (modifiable within a destructor)
        }

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
