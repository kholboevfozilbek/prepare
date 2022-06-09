
#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;

    cout << "Sum: " << a+b+c << "\n";
    cout << "Average: " << (a+b+c) / 3.0 << "\n";
    cout << "Product: " << a*b*c << "\n";
    return 0;
}
