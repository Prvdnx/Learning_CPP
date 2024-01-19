#include <iostream>
#include <string>

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
            // std::cout << "Destructor\n";
            user_count--;  // STATIC (modifiable within a destructor)
        }
};

int User::user_count = 0;  // STATIC data member can only be initialised outside the class

int add_user_if_not_exists(std::vector <User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if((users[i].first_name == user.first_name) && (users[i].last_name == user.last_name))
        {
            return (i);
        }
    }
    users.push_back(user);
    return (users.size() - 1);
}


std::ostream& operator << (std::ostream& output, const User user)  //====> EXTRACTION OPERATOR /////////////
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name; 
    return (output);
}

std::istream& operator >> (std::istream &input, User &user)  //====> INSERTION OPERATOR /////////////
{
    input >> user.first_name >> user.last_name; 
    return (input);
}


int main()
{
    User user;    // DEFAULT CONSTRUCTOR
    std::cin >> user;
    // user.first_name = "George";
    // user.last_name = "Owell";
    // user.set_status("Gold");
    std::cout << user << std::endl;

    user.~User(); // Call to Destructor (removes 1 user)
    //std::cout << "User count: " << User::get_user_count() << std::endl;

    return (0);
}
