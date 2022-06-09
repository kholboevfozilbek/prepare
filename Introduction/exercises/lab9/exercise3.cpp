

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool is_lower(char x);
char lower_to_upper(char x);
void to_uppercase(char arr[]);

int main(int argc, char const *argv[])
{
    char s[50];

    std::cout << "Enter a sentence  \n";
    std::cin.getline(s, 49);

    std::cout << "\nAll lowercase letters changed to UPPERCASE \n";
    to_uppercase(s);
    std::cout << s <<  " \n";
}

bool is_lower(char x)
{
    return (x >= 'a' && x <= 'z');
}

void to_uppercase(char arr[])
{
    for(int i=0; i<50; ++i)
    {
        if(is_lower(arr[i]))
        {
            arr[i] = toupper(arr[i]);
        }
    }
}

char lower_to_upper(char x) 
{
    return toupper(x);
}