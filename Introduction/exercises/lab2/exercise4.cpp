

#include <iostream>

int main(int argc, char const *argv[])
{
    float cost, sell;

    std::cout << "Enter cost of the product: ";
    std::cin >> cost;

    std::cout << "Enter the selling price: ";
    std::cin >> sell;

    if(cost == sell)
        std::cout << "\nNo profit, no loss \n";
    else if(sell > cost)
        std::cout << "\nProfit: " << sell - cost << " \n";
    else    
        std::cout << "\nLoss: " << cost - sell << " \n";

    return 0;
}
