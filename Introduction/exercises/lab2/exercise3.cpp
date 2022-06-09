
#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    if(a == b)
        std::cout << "\nNumbers are equal \n";
    else if(a > b)
        std::cout << a << " is larger \n";
    else    
        std::cout << b  << " is larger \n";

    return 0;
}
