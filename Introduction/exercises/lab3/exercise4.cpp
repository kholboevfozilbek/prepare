
#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    for(int i=1; i<=9; ++i)
    {
        std::cout << n << " * " << i << " = " << i * n << " \n";
    }

    return 0;
}
