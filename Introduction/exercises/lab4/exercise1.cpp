
#include <iostream>

int main(int argc, char const *argv[])
{
    int m;

    std::cout << "Enter M: ";
    std::cin >> m;

    float sum = 0.0f;
    int counter = 0;

    for(int i=1; sum <= m; ++i)
    {
        sum += i;
        ++counter;
        std::cout << i << "  ";
    }

    std::cout << "\n\nSum: " << sum << " \n";
    std::cout << counter << " consecutive integers \n";
    return 0;
}
