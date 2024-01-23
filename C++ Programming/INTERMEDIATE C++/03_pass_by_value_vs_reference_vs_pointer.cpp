#include <iostream>
#include <vector>

// void work(int x)  //====> Pass by VALUE //
// {
//     x++;
//     std::cout << x << std::endl;
//     std::cout << &x << std::endl;
// }

void work(int &x)  //====> Pass by REFERENCE //
{
    x++;
    std::cout << x << std::endl;
    std::cout << &x << std::endl;
}

void work(int *x)  //====> Pass by POINTER //
{
    (*x)++;
    std::cout << *x << std::endl; // value of int *x
    std::cout << x << std::endl; // address of int *x
}

void work(std::vector<int> &data)  //====> Pass by REFERENCE (working with vector) //
{
    for(int i = 0; i < data.size(); i++)
    {
        data[i]++;
    }
    std::cout << &data << std::endl;
}

// std::vector<int> work(std::vector<int> data)  //====> Pass by VALUE (working with vector) //
// {
//     for(int i = 0; i < data.size(); i++)
//     {
//         data[i]++;
//     }
//     std::cout << &data << std::endl;
//     return (data);
// }


int main()
{
    int a = 10;
    work(a);  // for pass by VALUE and pass by REFERENCE
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << "\n";


    //work(&a);  // for pass by POINTER (use &a or create a new pointer variable and give it address of a)
    int *b = &a;
    work(b);  // for pass by POINTER
    std::cout << *b << std::endl; // value of int *b
    std::cout << b << std::endl; // address of int *b
    std::cout << "\n";


    std::vector<int> data = {1, 2, 3, 4, 5};  // for pass by REFERENCE (working with vector)
    std::cout << &data << std::endl;
    work(data);
    std::cout << &data << std::endl;
    for(int x : data)
    {
        std::cout << x << " ";
    }
    std::cout << "\n";


    // std::vector<int> data1 = {1, 2, 3, 4, 5};  // for pass by VALUE (working with vector)
    // std::cout << &data1 << std::endl;
    // std::vector<int> data2 = work(data1);
    // std::cout << &data2 << std::endl;
    // for(int x : data2)
    // {
    //     std::cout << x << " ";
    // }

    return (0);
}
