

#include <iostream>

void get_date(int &day, int &month, int &year);

int main(int argc, char const *argv[])
{
    int day1, month1, year1;
    int day2, month2, year2;
    get_date(day1, month1, year1);
    get_date(day2, month2, year2);

    std::cout << day1 << "/" << month1 << "/" << year1 << "\n";
    std::cout << day2 << "/" << month2 << "/" << year2 << "\n";

    if(year1 < year2)
    {
        std::cout << day1 << "/" << month1 << "/" << year1 << " is earlier";
    }
    else if(year2 < year1)
    {
        std::cout << day2 << "/" << month2 << "/" << year2 << " is earlier";
    }
    else
    {
        if(month1 < month2)
        {
            std::cout << day1 << "/" << month1 << "/" << year1 << " is earlier";
        }
        else if(month2 < month1)
        {
            std::cout << day2 << "/" << month2 << "/" << year2 << " is earlier";
        }
        else
        {
            if(day1 < day2)
            {
                std::cout << day1 << "/" << month1 << "/" << year1 << " is earlier";
            }
            else if(day2 < day1)
            {
                std::cout << day2 << "/" << month2 << "/" << year2 << " is earlier";
            }
            else
            {
                std::cout << "\nDates are equal!!! \n";
            }
        }
    }

    return 0;
}

void get_date(int &day, int &month, int &year)
{
    std::cout << "Enter a valid date (dd-mm-yyyy):  \n";
    std::cout << "day: ";
    std::cin >> day;
    std::cout << "month: ";
    std::cin >> month;
    std::cout << "year: ";
    std::cin >> year;
}
