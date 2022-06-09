

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::string s = std::to_string(n);

    for(int i=s.size()-1; i >= 0; --i)
    {
        int x = s[i]-48;
        if(x != 9) 
        {
            ++x;
            s[i] = '0' + x;
        }
        else
            s[i] = 48;
    }

    n = std::stoi(s);

    std::cout << "\n" << n << "\n";

    return 0;
}
