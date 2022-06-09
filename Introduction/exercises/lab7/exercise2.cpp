
#include <iostream>

void get_array(int arr[]);
int sum_even(int arr[]);
int number_even(int arr[]);

int main(int argc, char const *argv[])
{
    int arr[5];

    get_array(arr);

    std::cout << "\nNumber of even numbers: " << number_even(arr) << " \n";
    std::cout << "Sum of even numbers: " << sum_even(arr) << " \n";
    std::cout << "Average of even numbers " << (float) sum_even(arr) / number_even(arr) << " \n";
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

int sum_even(int arr[])
{
    int sum = 0;
    for(int i=0; i<5; ++i)
    {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }

    return sum;
}

int number_even(int arr[])
{
    int counter=0;

    for(int i=0; i<5; ++i)
    {
        if(arr[i] % 2 == 0)
            ++counter;
    }

    return counter;
}
