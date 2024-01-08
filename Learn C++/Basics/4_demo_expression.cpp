#include <iostream>

using namespace std;

// int main()
// {
//    // Find area of a circle
//     float r, area;
//     cout << "Enter Radius ";
//     cin >> r;
//     area = 3.1425f * r * r;
//     // area = 22/7 * r * r;
//     // area = 22/7.0 * r * r;
//     // area = (float)22/7 * r * r;
//     cout << "Area is " << area << endl;

//     return (0);
// }


// #include <math.h>

// int main()
// {
//     // Find root of a quadratic equation (quoficient a, b and c)
//     int a,b,c;
//     float root1, root2;

//     cout << "Enter 3 values";
//     cin >> a >> b >> c;

//     root1 = (-b+sqrt(b*b-4*a*c)) / (2*a);
//     root2 = (-b-sqrt(b*b-4*a*c)) / (2*a);

//     cout << root1 << " " << root2 << endl;

//     return (0);
// }


#include <math.h>

int main()
{
    // Calculate Speed
    int u, v, a;
    float speed;
    cout << "Enter 3 numbers";
    cin >> u >> v >> a;
    speed = (v*v-u*u) / (2*a);
    cout << "Speed is " << speed << endl;

    return (0);
}

