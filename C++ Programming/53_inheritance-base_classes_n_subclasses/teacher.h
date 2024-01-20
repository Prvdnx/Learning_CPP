#ifndef TEACHER_H
# define TEACHER_H

#include <iostream>
#include <string>
#include <vector>
#include "user.hpp"

class Teacher : public User
{
    public:
        std::vector<std::string> classes_teahing;
        void output();
        Teacher();
};

#endif