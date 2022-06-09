
#include <iostream>

void get_array(int arr[]);
int largest(int arr[]);

int main(int argc, char const *argv[])
{
    int arr[5];

    get_array(arr);

    std::cout << "\nLargest value:  " << largest(arr) << " \n";
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

int largest(int arr[])
{
    int large = arr[0];
    for(int i=0; i<5; ++i)
    {
        if(arr[i] > large)
            large = arr[i];
    }

    return large;
}
