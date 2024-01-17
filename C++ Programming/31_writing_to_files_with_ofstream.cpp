#include <iostream>
#include <fstream> // must include this
#include <vector> // compile with -std=c++11

int main()
{
    // // std::ofstream file;
    // // file.open("hello.txt");
    // // std::ofstream file ("31-hello.txt"); // create and open a file

    // file << "hey\n"; // out a string to the file

    // std::vector<std::string> names;
    // names.push_back("Great");
    // names.push_back("Tim");
    // names.push_back("Prince");

    // for(std::string name : names)
    // {
    //     file << name << std::endl; // output strings from vector(array) to t he file using a range for loop
    // }
    // Data is usually overwritten everytime you run the program (it doesn't append to previous data)




    //\\//\\// TO APPEND TO FILE DATA //\\//\\//=============================

    // std::ofstream file ("31-hello.txt", std::ios::app); // create and open a file with append option

    // if(file.is_open()) // To check if file was opened successfully
    // {
    //     std::cout << "success n00b\n";
    // }

    // file << "hey\n"; // out a string to the file

    // std::vector<std::string> names;
    // names.push_back("Great");
    // names.push_back("Tim");
    // names.push_back("Prince");

    // for(std::string name : names)
    // {
    //     file << name << std::endl; // output strings from vector(array) to the file using a for loop
    // }



    std::string filename;
    std::cin >> filename;
    std::ofstream file (filename.c_str(), std::ios::app); // create and open a file with append option
                            // c_str() may be optional in c++11
    if(file.is_open()) // To check if file was opened successfully
    {
        std::cout << "success n00b\n";
    }

    file << "hey\n"; // out a string to the file

    std::vector<std::string> names;
    names.push_back("Great");
    names.push_back("Tim");
    names.push_back("Prince");

    for(std::string name : names)
    {
        file << name << std::endl; // output strings from vector(array) to the file using a for loop
    }

    file.close(); // may be optional
    return (0);
}
