#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;

    inFile.open("file.txt");
    // inFile.open("file_does_not_exist.txt");

    if (inFile.fail())  // if file does not exist
    {
        cout << "Error opening file." << endl;
        return (1);
    }

    /* // assuming file content is "4" or "4, 5"
    int number = 0;

    inFile >> number; // read data from file into the number integer
    inFile >> number; // trying to another data from file into the number integer
    if (inFile.fail())
    {
        cout << "Error file format incorrect." << endl;
        return (1);
    }
    cout << number << endl; */



    /*  // assuming file content is 1.1 1.2 1.3
                                //  2.1 2.2 2.3
                                //  3.1 3.2 3.3 
    double x1 = 0, x2 = 0, x3 = 0;

    while (true)
    {
        inFile >> x1 >> x2 >> x3; 
        if (inFile.eof()) break;
        else
            cout << x1 << " " << x2 << " " << x3 << endl;
    } */



    /* double a[3][3];
    int i = 0;

    while (inFile >> a[i][0] >> a[i][1] >> a[i][2])
        i++;

    cout << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << a[j][0] << " ";
        cout << a[j][1] << " ";
        cout << a[j][2] << endl;
    }
    cout << endl; */



    // assuming the file content is "This is a string"
    string line;
    // inFile >> line;  // this will only read in the first string if there's more that string in the file
    getline(inFile, line);
    cout << line << endl;

    inFile.close();

    return (0);
}