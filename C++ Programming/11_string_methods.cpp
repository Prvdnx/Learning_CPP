#include <iostream>
#include <string>

int main()
{
    std::string greeting = "Hello";
    std::cout << greeting.length() << std::endl;
    std::cout << greeting.size() << std::endl;
    std::cout << greeting << std::endl;

    //\\//\\ MODIFIER METHODS =========================
    greeting += " there";
    // greeting.append(" there!"); // works the same as the "+="
    std::cout << greeting << std::endl;

    greeting.insert(3, "   "); // add 3 spaces character after the 3rd index
    std::cout << greeting << std::endl;

    greeting.erase(3, 3); // erase 3 characters after the 3rd index
    // greeting.erase(3); // erase all characters after the 3rd index
    std::cout << greeting << std::endl;

    greeting.erase(greeting.length() -1); // erase the last characters at the end
    // greeting.pop_back(); // erase the last characters at the end
    std::cout << greeting << std::endl;

    greeting = "What the hell?";
    greeting.replace(9, 4, "Heaven"); // replace characters after 9th index with "Heaven"
    // greeting.replace(9, 4, "****"); // replace characters after 9th index with "****"
    std::cout << greeting << std::endl;

    greeting = "What the hell?";
    greeting.replace(greeting.find("hell"), 4, "****"); // finds "hell" and replaces it with "Heaven"
    std::cout << greeting << std::endl;

    greeting = "What is up?";
    std::cout << greeting.substr(5, 2) << std::endl; // extract "is" (part of a paragraph/sentence)

    std::cout << greeting.find_first_of("aeiou") << std::endl; // finds first of occurence any of those characters
    std::cout << greeting.find_first_of("!") << std::endl; // it won't be found so, it prints an npos (equivalent to -1)
    if (greeting.find_first_of("!") == -1) std::cout << "NOT FOUND!" << std::endl;

    if(greeting == "Hello") std::cout << "Equals" << std::endl; // comparing strings using "=="
    if(greeting == "What is up?") std::cout << "-Equals-" << std::endl;
    if(greeting.compare("Hello") == 0) std::cout << "Equals" << std::endl; // comparing strings using compare() function
    if(greeting.compare("What is up?") == 0) std::cout << "-Equals-" << std::endl;

    return (0);
}

