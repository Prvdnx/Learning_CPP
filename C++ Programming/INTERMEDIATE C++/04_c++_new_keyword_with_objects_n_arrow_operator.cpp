#include <iostream>
#include <string>

class User
{
    public:
        std::string name;
};

int main()
{
    int *x = new int(5);
    std::cout << "The pointer " << x << " points to " << *x << std::endl;
    delete (x);

    // User u;
    // u.name = "George Eliot";
    // std::cout << u.name << std::endl;

            // OR //
    
    User *u = new User;
    // (*u).name = "George Eliot";
    // std::cout << (*u).name << std::endl;
    u->name = "George Eliot";
    std::cout << u->name << std::endl;
    delete (u);

    // while (true)
    // {
    //     int *y =  new int(5);
    //     std::cout << y << std::endl;
    // }

    return (0);
}