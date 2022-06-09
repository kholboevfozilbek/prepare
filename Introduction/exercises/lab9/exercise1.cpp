
#include <iostream>
#include <string>
#include <algorithm>

int count_char(char arr[], char ch);
bool is_lower(char x);
int count_lower(char arr[]);

int main(int argc, char const *argv[])
{
    char s[50];
    char tar;

    std::cout << "Enter a sentence  \n";
    std::cin.getline(s, 49);

    std::cout << "\nEnter a character to search:  ";
    std:: cin >> tar;

    std::cout << "\n" << tar << " occurs " << count_char(s, tar) << " times \n";
    std::cout << "Lowercase letters: " << count_lower(s) << " \n";
    return 0;
}

int count_char(char arr[], char ch)
{
    std::string s(arr);

    return std::count(s.begin(), s.end(), ch);
}

bool is_lower(char x)
{
    return (x >= 'a' && x <= 'z');
}

int count_lower(char arr[])
{
    std::string s(arr);

    return std::count_if(s.begin(), s.end(), is_lower);
}
