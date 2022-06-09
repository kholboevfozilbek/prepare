

#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    int a, b, user, counter = 0;
    srand(time(NULL));

    for(int i=0; i<10; ++i)
    {
        a = rand() % 10;
        b = rand() % 10;

        std::cout << a << " * " << b << " = ";
        std::cin >> user;

        if(user == a*b)
        {
            std::cout << "Correct \n";
            ++counter;
        }
        else
        {
            std::cout << " Incorrect \n";
        }
    }

    std::cout << "\n--------------------------------\n";
    std::cout << "Your grade:  ";

    switch (counter)
    {
    case 10:
        std::cout << "5 \n";
        break;
    case 9:
        std::cout << "4.5 \n";
        break;
    case 8:
        std::cout << "4 \n";
        break;
    case 7:
        std::cout << "3.5 \n";
        break;
    case 6:
        std::cout << "3 \n";
        break;
    default:
        std::cout << "2 \n";
        break;
    }

    return 0;
}
