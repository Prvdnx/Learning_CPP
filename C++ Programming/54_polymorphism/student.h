#ifndef TEACHER_H
# define TEACHER_H

#include <iostream>
#include <string>
#include "user.h"

class Student : public User
{
    public:
        void output();
};
#endif