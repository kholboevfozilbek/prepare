
#include <iostream>
#include <string>

bool equal(std::string s);

int main(int argc, char const *argv[])
{
    int n;

    std::cout << "Enter a number (6-digit at most):  ";
    std::cin >> n;

    std::string str = std::to_string(n);

    if(str.size() <= 6)
    {
        if(equal(str))
            std::cout << "\nAll digits are equal !! \n";
        else
            std::cout << "\nNot all digits are equal !! \n";
    }
    else
    {
        std::cout << "\nThe number given is larger than 6-digit limit \n";
    }

    return 0;
}

bool equal(std::string s)
{
    char target = s[0];
    for(char x : s)
    {
            if(target != x)
                return false;
                
    }

    return true;
}
