

#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
    int a;

    std::cout << "Enter a number: ";
    std::cin >> a;

    if(a > 9 && a < 100)
    {
        std::cout << a << " is two-digit number \n";
    }
    else if(a < -9 && a > -100)
    {
        std::cout << a << " is two-digit number \n";
    }
    else
    {
        std::cout << a << " is  NOT two-digit number \n";
    }
    return 0;
}
