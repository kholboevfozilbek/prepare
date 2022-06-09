
#include <iostream>

void input_array(int* arr, int n);

int main(int argc, char const *argv[])
{
    int* arr;
    int n;

    std::cout << "Length of the array:  ";
    std::cin >> n;

    arr = new int[n];

    input_array(arr, n);

    return 0;
}

void input_array(int* arr, int n)
{
    std::cout << "Please enter " << n << " elements \n";
    for(int i=0; i<n; ++i)
    {
        std::cout << "[" << i+1 << "] ";
        std::cin >> arr[i];
    }
}
