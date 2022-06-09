
#include <iostream>

int main(int argc, char const *argv[])
{
    int n, m;
    std::cout << "Enter number: ";
    std::cin >> n;

    std::cout << "Multiplication untill: ";
    std::cin >> m;

    for(int i=1; i<=m; ++i)
    {
        std::cout << n << " * " << i << " = " << i * n << " \n";
    }

    return 0;
}
