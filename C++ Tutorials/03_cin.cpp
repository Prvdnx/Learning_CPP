
#include <iostream>

using namespace std;

// int main()
// {
//     int x;
//     cout << "Enter an Integer: ";
//     cin >> x;
//     // if invalid input is entered, "cin" will be stuck with an error that affects other calls to "cin" after that but there's way to fix that
//     cout << "You entered the Integer " << x << endl;


//     // Calculate area
//     double height = 0;
//     double width = 0;
//     double area = 0;

//     cout << "Enter height and width (separated by space) : ";
//     cin >> height >> width;
//     area = height * width;
//     cout << height << " x " << width << " = " << area << endl;

//     return (0);
// }


int main()
{
/*    int x;
    cout << "Enter an Integer: ";
    if (cin >> x)
    {
    cout << "You entered the Integer " << x << endl;
    }
    else
    {
        cin.clear();
        cout << "Invalid Input" << endl;
    }

    cin.ignore(1000, '\n');


    // Calculate area
    double height = 0;
    double width = 0;
    double area = 0;

    cout << "Enter height and width (separated by space) : ";
    cin >> height >> width;
    area = height * width;
    cout << height << " x " << width << " = " << area << endl; */

    // Working with string
    string name;
    cout << "Enter your name? ";
    //cin >> name; //cin reads only the first string if more than one is entered.
    getline(cin, name); //This reads all string entered if more than one is entered.
    cout << "Hello " << name << "!" << endl;

    return (0);
}
