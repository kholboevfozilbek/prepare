

#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
    int counter = 0, n, sum=0;

    std::cout << "Enter n: ";
    std::cin >> n;

    for(int i=1; counter < n; ++i)
    {
        std::stringstream ss;
        ss << i;

        std::string str;
        ss >> str;

        switch (str[str.size() - 1])
        {
            case '1':
            case '2':
            case '7':
                std::cout << i << "  ";
                sum += i;
                ++counter;
            break;
            default:
                break;
        }
    }

    std::cout << "\nSum: " << sum << " \n";
    return 0;
}
