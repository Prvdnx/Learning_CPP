#include <iostream>
#include <vector>

class User
{
    std::string status = "Gold"; // it is automatically set to private

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status() // function
        {
            return status;
        }

        // User() //====> CONSTRUCTOR 1 (Default) (it just prints the word "Constructor" for each User constructed)
        // {
        //     std::cout << "Constructor\n";
        // }

        // User(std::string first_name, std::string last_name) //====> CONSTRUCTOR 2
        // {
        //     this->first_name = first_name;
        //     this->last_name = last_name;
        // }

        User(std::string first_name, std::string last_name, std::string status) //====> CONSTRUCTOR 3
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
    // User me;
    // me.first_name = "George";
    // me.last_name = "Eliot";

    // // std::vector <User> users;
    // // users.push_back(me);

    // std::vector <User> users;
    
    // // std::cout << users[0].first_name << std::endl;

    // User user1, user2, user3;
    // user1.first_name = "Sally";
    // user1.last_name = "Swan";

    // user2.first_name = "Jake";
    // user2.last_name = "Johnson";

    // user3.first_name = "George";
    // user3.last_name = "Eliot";

    // users.push_back(user1);
    // users.push_back(user2);
    // users.push_back(user3);

    // User user;
    // user.first_name = "Jake";
    // // user.last_name = "Johnson";
    // user.last_name = "Jacob";

    // std::cout << add_user_if_not_exists(users, user) << std::endl;
    // std::cout << users.size() << std::endl;


    // User user("George", "Eliot");  // USING CONSTRUCTOR 2
    // std::cout << user.first_name << " " << user.last_name << std::endl;

    User user("George", "Eliot", "Silver");  // USING CONSTRUCTOR 3
    std::cout << user.first_name << " " << user.last_name << std::endl;
    std::cout << "Status: " << user.get_status() << std::endl;

    return (0);
}

