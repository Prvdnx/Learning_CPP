
#include <iostream>

// using namespace std;

// int main()
// {
//     int sum = 0;
//     int A[] = {1,2,5,8,9};

//     for(auto x : A)
//     {
//         sum = sum + x;
//     }

//     cout << sum << endl;
//     return (0); 
// }

int main()
{
    int sum = 0;
    int A[] = {2,4,6,7,9};

    for(auto x : A)
    {
        sum = sum + x;
        std::cout << x << std::endl;
    }

    std::cout << "sum is " << sum << std::endl;
    return (0); 
}
