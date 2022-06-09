
#include <iostream>

int main(int argc, char const *argv[])
{
    int year;

    std::cout << "Enter the year: ";
    std::cin >> year;

    if(year % 4 == 0)
    {
        if(year % 400 == 0)
        {
            if(year % 100 == 0)
            {
                std::cout << year << " IS leap year \n";
            }
            else
                std::cout << year << " is NOT leap year \n";
        }
        else
             std::cout << year << " is NOT leap year \n";
    }
    else
        std::cout << year << " is NOT leap year \n";

    return 0;
}
