#include <iostream>
#include <fstream> // must include this
#include <vector> // compile with -std=c++11

int main()
{
    std::ifstream file ("31-yesss.txt");

    if(file.is_open())
    {
        std::cout << "It worked!\n";
    }

    // std::vector<std::string> names;
    // std::string input;
    // while(file >> input)
    // {
    //     names.push_back(input);
    // }

    // for(std::string name : names)
    // {
    //     std::cout << name << std::endl;
    // }


    // char temp = file.get();
    // std::cout << temp << "\n";


    std::string line;
    getline(file, line);
    std::cout << line << "\n";

    return (0);
}
