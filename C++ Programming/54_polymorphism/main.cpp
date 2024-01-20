
#include "user.h"
#include "teacher.h"
#include "student.h"

int main()
{
    // Teacher teacher;
    // User& u = teacher;
    // u.output();
    // // Compile with: g++ main.cpp user.cpp teacher.cpp -std=c++11

    Teacher teacher;
    Student student;
    User& u1 = teacher;
    User& u2 = student;
    u1.output();
    u2.output();
    // Compile with: g++ main.cpp user.cpp teacher.cpp student.cpp -std=c++11

    return (0);
}
