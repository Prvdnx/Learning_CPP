
#include <iostream>

using namespace std;

class Number
{
    private:
        // double number;
        double *number;

    public:

        Number(double num)
        {
            // number = num;
            number = (double *) malloc(sizeof(double));
            *number = num;
            cout << "Constructor executing!" << endl;
            // cout << "Number: " << number << endl << endl;
            cout << "Number: " << *number << endl << endl;
        }

        ~Number()
        {
            cout << "Destructor executing!" << endl;
            // cout << "NUmber: " << number << endl << endl;
            cout << "Number: " << *number << endl << endl;
            free(number);
        }
};

void test()
{
    Number six(6);
}

int main()
{
    Number *five = new Number(5);
    delete five;

    test();

    Number seven(7);

    return (0);
}
