
#include <iostream>

using namespace std;

class Square
{
    private:
        int side_length;

    public:

        Square(int length)
        {
            side_length = length;
        }

        int area()
        {
            return (side_length * side_length);
        }
};