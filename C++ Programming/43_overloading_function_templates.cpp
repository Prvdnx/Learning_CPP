#include <iostream>
#include <string>

template <typename T>
void    swap(T &a, T &b) // SWAPPING INTS
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void    swap(T a[], T b[], int size) // SWAPPING ARRAYS
{
    for(int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";


    std::string first_name = "Caleb";
    std::string last_name = "Curry";
    swap(first_name, last_name);
    std::cout << first_name << " " << last_name << std::endl;


    int const SIZE = 6;
    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for(int i = 0; i < SIZE; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";

    swap(nines, ones, SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";

    return (0);
}
