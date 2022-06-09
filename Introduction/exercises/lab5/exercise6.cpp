
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    char choice;
    float input;
    int counter=0, pos=0, sum_pos=0, neg=0, sum_neg=0;
    do
    {
        ++counter;
        std::cout << "Give a number:  ";
        std::cin >> input;

        if(input > 0)
        {   
            std::cout << "Square root:  " << std::sqrt(input) << "\n";
            ++pos;
            sum_pos += input;
        }
        else if(input != 0)
        {
            std::cout << "Square:  " << std::pow(input, 2) << " \n";
            ++neg;
            sum_neg += input;
        }

        std::cout << "\nwant to continue? [y/n]:  ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << counter << " numbers given ( " << pos << " positive, " << neg << " negative ) \n";
    std::cout << "Sum of positive: " << sum_pos << " \n";
    std::cout << "Sum of negative: " << sum_neg << " \n";
    
    std::cout << "\nAverage of positives: " << (float) sum_pos / pos << " \n";
    std::cout << "\nAverage of negatives: " << (float) sum_neg / neg << " \n";
    return 0;
}
