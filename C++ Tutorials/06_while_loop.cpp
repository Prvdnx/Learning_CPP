
#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    // cout << i << endl;
    // i = i + 1;

    // cout << i << endl;
    // i = i + 1;

    // cout << i << endl;
    // i = i + 1;

    // cout << i << endl;
    // i = i + 1;

    // cout << i << endl;
    // i = i + 1;



    // while ( i <= 5)
    // {
    //     cout << i << endl;

    //     // if (i == 2) break;

    //     // if (i == 2)
    //     // {
    //     //     i = i + 2;
    //     //     continue;
    //     // }

    //     i = i + 1;
    // }



    int sum = 0;
    int number = 0;

    while (number != -1)
    {
        cout << "Enter Positive (Or -1 To Quit): ";
        cin >> number;

        // if (number <= 0 && number != -1)
        // {
        //     cout << "Number must be a positive integer" << endl;
        //     break;
        // }

        if (number != -1) sum = sum + number;
    }
    cout << "Sum is = " << sum << endl;

    cout << "While loop done!" << endl;

    return (0);
}
