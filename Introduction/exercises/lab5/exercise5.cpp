
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    float weekly;
    do
    {
        std::cout << "Enter number of hours worked (-1 to end):  ";
        std::cin >> weekly;

        if(weekly <= 0)
        {
            std::cout << "End of computations \n";  
        }
        else
        {
            float percent = weekly * 0.1;
            std::cout << "Accrued leave:  " << std::round(2.0 + percent) << " \n";
        }
    } while (weekly > 0);

    

    
    return 0;
}
