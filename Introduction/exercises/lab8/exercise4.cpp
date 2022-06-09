

#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    std::srand(time(NULL));
    int n;
    std::cout << "Enter the length of the array: ";
    std::cin >> n;

    int* arr = new int[n];
    int counters[11] = {0};
    for(int i=0; i<n; ++i)
    {
        arr[i] = rand() % 10 + 1;
    } 
    
    for(int i=0; i<n; ++i)
    {
        switch (arr[i])
        {
        case 0:
            counters[0]++;
            break;
        case 1:
            counters[1]++;
            break;
        case 2:
            counters[2]++;
            break;
        case 3:
            counters[3]++;
            break;
        case 4:
            counters[4]++;
            break;
        case 5:
            counters[5]++;
            break;
        case 6:
            counters[6]++;
            break;
        case 7:
            counters[7]++;
            break;
        case 8:
            counters[8]++;
            break;
        case 9:
            counters[9]++;
            break;
        case 10:
            counters[10]++;
            break;
        default:
            break;
        }
    }

    std::cout << "\nElements : \n";
    for(int i=0; i<n; ++i)
    {
        std::cout << arr[i] << "  ";
    }

    std::cout << " \n";

    for(int i=0; i<11; ++i)
    {
        std::cout << i << " : " << counters[i] << " \n";
    }

    return 0;
}
