
#include <iostream>

int GCD(int a,  int b);
int LCM(int a, int b);

int main(int argc, char const *argv[])
{
    int a, b;

    std::cout << "Enter 2 integers: ";
    std::cin >> a >> b;

    std::cout << "\nGCD (" << a << ", "<< b << " ) = " << GCD(a, b) << " \n"; 
    std::cout << "\nLCM (" << a << ", "<< b << " ) = " << LCM(a, b) << " \n"; 
    return 0;
}

int GCD(int a,  int b)
{
    int x = a;
    int y = b;

    while(x != y)
    {
        if(x > y)
            x = x - y;
        else
            y = y - x;
    }

    return x;
}

int LCM(int a, int b)
{
    return a*b / GCD(a, b);
}