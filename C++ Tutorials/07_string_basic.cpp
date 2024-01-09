
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


    return (0);
}