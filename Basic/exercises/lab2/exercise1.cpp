
#include <iostream>

int main(int argc, char const *argv[])
{
    int grade;
    std::cout << "Enter numerical grade: ";
    std::cin >> grade;
    std::cout << "\nLetter grade:  "; 

    if(grade < 0 || grade > 100)
    {
        std::cout << "\nINVALID GRADE \n";
        return -1;
    }

    switch (grade/10)
    {
    case 10:
    case 9:
        std::cout << "A " << " \n";
        break;

    case 8:
        std::cout << "B " << " \n";
        break;
    case 7:
        std::cout << "C " << " \n";
        break;
    case 6:
        std::cout << "D " << " \n";
        break;
    default:
        std::cout << "F " << "\n";
        break;
    }

    return 0;
}
