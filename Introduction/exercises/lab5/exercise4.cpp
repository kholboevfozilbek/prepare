
#include <iostream>

int main(int argc, char const *argv[])
{
    float budget, spent = 0.0f, temp;

    std::cout << "Enter amount budgeted for month:  ";
    std::cin >> budget;

    do
    {
        std::cout << "Enter an amount spent (non-positive value to end):  ";
        std::cin >> temp;

        if(temp > 0)
            spent += temp;

    } while (temp > 0);

    std::cout << "\nBudget:  " << budget << "\n";
    std::cout << "Spent:  " << spent << "\n";

    if(budget >= spent)
    {
        std::cout << "You are " << budget-spent << " under budget. WELL DONE ! \n";
    }
    else
    {
        std::cout << "You are " << spent-budget << " over budget. PLAN BETTER NEXT TIME ! \n";
    }
    

    return 0;
}
