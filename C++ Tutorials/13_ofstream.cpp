#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;

    // outFile.open("file.txt");
    outFile.open("file.txt", ofstream::app); // To append to the content of an existing file

    if (outFile.fail())
    {
        cout << "Error opening file." << endl;
        return (1);
    }

    outFile << "Content" << endl;

    double x = 4.5;
    int y = 10;
    string z = "abc";

    outFile << x << endl;
    outFile << y << endl;
    outFile << z << endl;

    outFile.close();

    return (0); 
}
