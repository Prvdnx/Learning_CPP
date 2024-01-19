#include <iostream>

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
};

int main()
{
    User me;
    me.first_name = "George";
    me.last_name = "Eliot";

    std::cout << "First name: " << me.first_name << std::endl;
    std::cout << "Status: " << me.get_status() << std::endl;

    return (0);
}

