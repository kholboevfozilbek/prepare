

#include <iostream>
#include <cmath>

double hypotenuse(double a, double b);

int main(int argc, char const *argv[])
{
    double a, b;

    std::cout << "Enter 2 legs of right triangle:  \n";
    std::cin >> a >> b;

    std::cout << "\nHypotenuse : " << hypotenuse(a, b) << " \n";
    
    return 0;
}

double hypotenuse(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}