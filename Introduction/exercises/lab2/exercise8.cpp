
#include <iostream>
#include <chrono>
#include "date.h"

bool year_leap(int year);

int main(int argc, char const *argv[])
{
    int day, month, y;
    std::cout << "Enter a valid date (dd-mm-yyyy):  \n";
    std::cout << "day: ";
    std::cin >> day;
    std::cout << "month: ";
    std::cin >> month;
    std::cout << "year: ";
    std::cin >> y;

    if(year_leap(y) == true)
    {
        // if the year is leap we should add +1 (29-February)
        
    }

    return 0;
}

bool year_leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}
