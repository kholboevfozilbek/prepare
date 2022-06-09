
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char const *argv[])
{
    int n;

    std::cout << "Enter a number:  ";
    std::cin >> n;

    std::stringstream ss;
    ss << n;

    std::string str;
    ss >> str;
    float sum = 0.0f;

    for(char x : str)
    {
        int xx = x-48;
        std::cout << xx << " + ";
        sum += xx;
    }

    std::cout << "\nSum:  " << sum << " \n";


    return 0;
}
