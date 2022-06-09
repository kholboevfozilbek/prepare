

#include <iostream>

int main(int argc, char const *argv[])
{
    char choice;
    
    do
    {
        std::cout << "Learn to walk before you run \n";
        std::cout << "you want to repeat? [y/n]:  ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    
    return 0;
}
