
#include <iostream>


int main(int argc, char const *argv[])
{
    int a, b;
    std::cout << "Enter 2 integers: ";
    std::cin >> a >> b;

    std::cout << a << " + " << b << " = " << a+b << "\n";
    std::cout << a << " - " << b << " = " << a-b << "\n";
    std::cout << a << " * " << b << " = " << a*b << "\n";
    std::cout << a << " / " << b << " = " << a/b << "\n";

    return 0;
}
