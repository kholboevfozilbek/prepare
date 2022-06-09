
#include <iostream>
#include <cmath>

bool check(int a, int b, int c);
float area(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int a, b, c;
    std::cout << "Enter sides of triangle:  ";
    std::cout << "\na: "; std::cin >> a;
    std::cout << "b: "; std::cin >> b;
    std::cout << "c: "; std::cin >> c;

    if(check(a, b, c) == true)
    {
        std::cout << "\nArea: " << area(a, b, c);
        std::cout << "\nPerimeter: " << a + b + c << " \n";
    }
    else
        std::cout << "\nInvalid lengths to build triuangle \n";


    return 0;
}

bool check(int a, int b, int c)
{
    if(a + b <= c || a + c <= b || b+c <= a)
        return false;
    return true;
}

float area(int a, int b, int c)
{
    float s = (a+b+c) / 2.0;
    return sqrt(s*(s-a) * (s-b) * (s-c));
}