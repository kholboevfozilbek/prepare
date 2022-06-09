
#include <iostream>

void get_array(int arr[]);
int sum(int arr[]);
int great_average(int arr[]);

int main(int argc, char const *argv[])
{
    int arr[5];

    get_array(arr);

    std::cout << "\nSUM: " << sum(arr) << " \n";
    std::cout << "AVERAGE: " << sum(arr) / 5.0 << " \n";
    std::cout << "Number of el greater than " << sum(arr) / 5.0 << " : " << great_average(arr) << " \n";
    return 0;
}

void get_array(int arr[])
{
    std::cout << "\nPlease enter 5 integers:  \n";
    for(int i=0; i<5; ++i)
    {
        std::cout << "[" << i+1 << "]  ";
        std::cin >> arr[i];
    }
}

int sum(int arr[])
{
    int sum = 0;
    for(int i=0; i<5; ++i)
    {
        sum += arr[i];
    }

    return sum;
}

int great_average(int arr[])
{
    float av = sum(arr) / 5.0;
    int counter = 0;

    for(int i=0; i<5; ++i)
    {
        if(arr[i] > av)
            ++counter;
    }

    return counter;
}
