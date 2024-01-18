#include "maths_utils.h"

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.length, rectangle.width) << std::endl;
    std::cout << area(rectangle.length) << std::endl;
    std::cout << area(rectangle) << std::endl;

    std::cout << power(3,3) << std::endl;
    std::cout << power(3) << std::endl;

    return (0);
}
