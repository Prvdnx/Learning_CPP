#include <iostream>

// struct User
// {
//     std::string first_name;
//     std::string last_name;
//     std::string status;
// };

// // struct User
// // {
// //     std::string first_name;
// //     std::string last_name;

// //     private:
// //         std::string status;
// // };


// int main()
// {
//     User me;
//     me.first_name = "George";
//     me.last_name = "Eliot";
//     me.status = "Gold"; // can't access of modify it here if it's private

//     std::cout << "First name: " << me.first_name << std::endl;
//     std::cout << "Status: " << me.status << std::endl; // can't access it here if it's private

//     return (0);
// }



struct User
{
    std::string first_name;
    std::string last_name;
    std::string get_status() // function
    {
        return status;
    }

    private:
        std::string status = "Gold";  // -std=c++11
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
