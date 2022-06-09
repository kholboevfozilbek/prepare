
#include <iostream>
#include <string>

bool palindrome(std::string s);

int main(int argc, char const *argv[])
{
    std::string s;

    std::cout << "\nEnte a word:  ";
    std::cin >> s;

    if(palindrome(s))
        std::cout << "\nThe Word is palindrome \n";
    else
        std::cout << "\nThe word is not palindrome \n";

    return 0;
}

bool palindrome(std::string s)
{
    if(s.size() % 2 == 0)
    {
        for(int i=0, j=s.size()-1; i<s.size()/2 && j >= s.size() / 2; ++i, --j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
        }

        return true;
    }
    else
    {
        for(int i=0, j=s.size()-1; i<s.size()/2 && j > s.size() / 2; ++i, --j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
        }

        return true;
    }
}
