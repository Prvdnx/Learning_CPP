
#include <iostream>
// #include <string>

using namespace std;

class Cat
{
    private:
        string name;
        string color;
        string favorite_toy;

    public:

        void print_cat()
        {
            cout << "Name: " << name << endl;
            cout << "Color: " << color << endl;
            cout << "Favourite Toy: " << favorite_toy << endl;
        }

        Cat()
        {
            name = "Unknown";
            color = "Unknown";
            favorite_toy = "Unknown";
        }

        Cat(string n)
        {
            name = n;
            color = "Unknown";
            favorite_toy = "Unknown";
        }

        // Cat(string n, string c, string ft = "Laser Pointer") // "Laser Pointer" is a default parameter value
        // {
        //     name = n;
        //     color = c;
        //     favorite_toy = ft;
        // }
        Cat(string n, string c, string ft = "Laser Pointer"); // "Laser Pointer" is a default parameter value
};

// A constructor(function) can also be defined outside the class
Cat::Cat(string n, string c, string ft)
{
    name = n;
    color = c;
    favorite_toy = ft;
}


int main()
{
    Cat cat1;
    cout << "Cat 1..." << endl;
    cat1.print_cat();
    cout << endl;

    Cat cat2("Spot");
    cout << "Cat 2..." << endl;
    cat2.print_cat();
    cout << endl;

    Cat cat3("Garfield", "Orange", "Ball of Yarn");
    cout << "Cat 3..." << endl;
    cat3.print_cat();
    cout << endl;

    Cat cat4("Garfield", "Orange");
    cout << "Cat 4..." << endl;
    cat4.print_cat();
    cout << endl;

    return (0);
}
