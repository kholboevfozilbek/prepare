
#include <iostream>

int main(int argc, char const *argv[])
{
    int percent;
    std::cout << "Enter % increase: ";
    std::cin >> percent;

    int next = 2500;
    for(int i=0; i<6; ++i)
    {
        next += next*(percent/100.0);
        std::cout << "Year " << i+1 << ": " << next << " \n";
    }    


    return 0;
}
