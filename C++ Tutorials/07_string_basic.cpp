
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string test1 = "abcdefghi";

    cout << test1 << endl;

    cout << "size: " << test1.size() << endl;

    cout << "test1[0]: " << test1[0] << endl;
    cout << "test1[1]: " << test1[1] << endl;
    cout << "test1.at(3): " << test1.at(3) << endl;

    test1[2] = 'C';
    cout << test1 << endl;

    test1 = test1 + "jklmnop";
    test1 += "qrstu";
    test1.append("vwxyz");
    cout << test1 << endl;

    cout << "length: " << test1.length() << endl;

    string test2 = "123";
    string test3;

    test3 = test1 + test2;
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    test3.clear();
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    // string test4 = to_string(-10);
    string test4 = to_string(-10.5);
    // string test4 = to_string(true);
    cout << test4 << endl;

    double number = stod(test4);
    cout << "number: " << number << endl;

    string test5 = "A test string";
    string sub = test5.substr(2,4);
    cout << "sub: " << sub << endl;

    // Accept input from user
    string name;
    cout << "Enter name: ";
    // cin >> name; //This reads only the first string if more than one string is entered.
    getline(cin, name); //This reads all strings is entered.
    cout << "Name: " << name << endl;

    return (0);
}