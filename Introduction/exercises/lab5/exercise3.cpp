
#include <iostream>

int main(int argc, char const *argv[])
{
    int q, p;
    char choice;

    do
    {
        std::cout << "Enter quantity: ";
        std::cin >> q;
        std::cout << "Enter price per item: ";
        std::cin >> p;

        if(p*q > 5000)
        {
            float d = (p*q) * 0.1;
            std::cout << "\nTotal expense with discount 10% : " << (p*q) - d;
        }
        else
        {
            std::cout << "\nTotal expense:  " << q*p << " \n";
        }

        std::cout << "\nwant to repeat? [y/n]:  ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    

    return 0;
}
