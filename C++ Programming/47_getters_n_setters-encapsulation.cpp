#include <iostream>
#include <iostream>
#include <vector>

// Getter and setters are functions that allow us have access to private data members of a class

class User
{
    std::string status = "Gold"; // it is automatically set to private

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()  //====> THIS IS A GETTER
        {
            return status;
        }

        void    set_status(std::string status)  //====> THIS IS A SETTER
        {
            // this->status = status;
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "No status";
            }
        }

        User() //====> DEFAULT CONSTRUCTOR
        {

        }

        User(std::string first_name, std::string last_name, std::string status) //====> CONSTRUCTOR
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }

        ~User() //====> DESTRUCTOR
        {
            std::cout << "Destructor\n";
        }
};


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


int main()
{
    // User user("George", "Eliot", "Silver");    // USING CONSTRUCTOR 
    // std::cout << user.first_name << " " << user.last_name << std::endl;

    User user;    // USING DEFAULT CONSTRUCTOR
    user.set_status("Cheese");
    std::cout << "Status: " << user.get_status() << std::endl;

    return (0);
}

