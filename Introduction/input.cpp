

#include <iostream>

/*
In order to assign a variable with a
value given by the user, we
can use the input stream object
named cin.

The stream cin can be seen as
associated with the standard input
device (a keyboard).

The expression
cin>>side;
“redirects” the data from the
keyboard to the variable given after
the input operator >>

Before the expression
cin>>side;
the variable named side must be
defined.
*/

int main() 
{
    double side;

    std::cout << "Enter side of the square: ";
    std::cin >> side;

    std::cout << "\nArea: " << side*side << std::endl;
    return 0;
}