
#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;

    b = b * -1;

    float x = b / a;

    std::cout << "\nx = " << x << " \n";

    return 0;
}
