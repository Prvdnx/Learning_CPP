#ifndef USER_H
# define USER_H

#include <iostream>
#include <string>

class User
{
    std::string status = "Gold";
    static int user_count;  // STATIC

    public:
        static int get_user_count();  // STATIC

        std::string first_name;
        std::string last_name;

        std::string get_status();  // THIS IS A GETTER

        void    set_status(std::string status);  // THIS IS A SETTER

        User(); // DEFAULT CONSTRUCTOR

        User(std::string first_name, std::string last_name, std::string status); // CONSTRUCTOR
       
        ~User(); // DESTRUCTOR

        virtual void output();  //====> NEW FUNCTION ////// (you may try removing the "virtual" keyword and compare the output)

        friend std::ostream& operator << (std::ostream &output, const User user);  // EXTRACTION OPERATOR as a FRIEND FUNCION
        friend std::istream& operator >> (std::istream &output, User &user);  // INSERTION OPERATOR as a FRIEND FUNCION
};
#endif