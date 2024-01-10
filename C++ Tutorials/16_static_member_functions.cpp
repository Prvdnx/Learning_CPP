
#include <iostream>

using namespace std;

class Square
{
    private:
        int side_length;
        static int total_squares;

        static void incrementTotal()
        {
            total_squares++;
        }

    public:

        Square(int length)
        {
            side_length = length;
            //total_squares++;
            incrementTotal();
        }

        int area()
        {
            return (side_length * side_length);
        }

        static int getTotal()
        {
            return (total_squares);
        }
};

int Square::total_squares = 0;

int main()
{
    Square square1(5);

    cout << "square1 area: " << square1.area() << endl;

    cout << "total squares: " << Square::getTotal() << endl;

    Square square2(10);

    cout << "square2 area: " << square2.area() << endl;

    cout << "total squares: " << Square::getTotal() << endl; // Best Practice
    // cout << "total squares: " << square2.getTotal() << endl; // it work the same but not the best practice

    return (0);
}