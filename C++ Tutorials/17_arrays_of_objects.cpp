
#include <iostream>

using namespace std;

class Square
{
    public:
        int side_length;
        string color;

        void print()
        {
            cout << "side_length: " << side_length;
            cout << ", color: " << color << endl;
        }

        Square()
        {
            side_length = 0;
            color = "black";
        }

        Square(int set_length, string set_color)
        {
            side_length = set_length;
            color = set_color;
        }

        Square(int set_length)
        {
            side_length = set_length;
            color = "black";
        }
}; 

int main()
{
    // Square squares[3];  // using the 1st consructor

    // Square squares[3] = {Square(8, "red"),  // using the 2nd constructor 
    //                      Square(4, "orange"),
    //                      Square(2, "green")};

    // Square squares[3] = {2, 4, 8};  // using the 3rd constructor
    
    Square squares[3] = {2, Square(5, "red")};  // using all 3 constructors (2nd, 3rd, 1st respectively)

    for (int i = 0; i < 3; i++)
        squares[i].print();

    return (0);
}
