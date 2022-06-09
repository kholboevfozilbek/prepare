
#include <iostream>

using std::cout; 
using std::cin;

int main(int argc, char const *argv[])
{
    float cel;
    cout << "Temperature converter from Celsius into Kelvin and Fahrenheit \n";
    cout << "Enter the value of temperature in Celsius scale: ";
    cin >> cel;

    cout << "---------------------------------------- \n";

    cout << cel << " celsius = " << cel + 273.15 << " " << " Kelvin \n";
    cout << cel << " celsius = " << 32 + 9/5.0 * cel<< " " << " Fahrenheit \n";

    cout << "---------------------------------------- \n";

    return 0;
}
