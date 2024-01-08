#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "May I know your name? ";
    //cin >> name; //This reads only the name that comes first if more than one is entered.
    getline(cin, name); //This reads all names entered if more than one is entered.
    cout << "Welcome Mr./Mrs. " << name << endl;

    return (0);
}

