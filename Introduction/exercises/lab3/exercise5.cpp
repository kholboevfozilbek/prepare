
#include <iostream>

int main(int argc, char const *argv[])
{
    int n, sum=0;
    std::cout << "Enter n: ";
    std::cin >> n;

    for(int i=0, odd=1; i<n; ++i, odd+=2)
    {
        std::cout << odd << " ";
        sum += odd;
    }

    std::cout << "\nSum: " << sum << " \n";
    return 0;
}
