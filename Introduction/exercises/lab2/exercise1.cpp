

#include <iostream>

int main(int argc, char const *argv[])
{
    int quantity, price_per;

    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    std::cout << "Enter price per item: ";
    std::cin >> price_per;

    int total = price_per * quantity;

    if(total > 5000)
    {
        float discount = total * 0.1;
        std::cout << "\nTotal expense with 10% discount: " << total - discount << "\n";
    }
    else 
    {
        std::cout << "\nTotal expense: " << price_per * quantity << "\n";
    }

    return 0;
}
