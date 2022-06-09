

#include <iostream>

void get_array(float arr[]);
float largest(float arr[]);
float smallest(float arr[]);
float sum(float arr[]);


int main(int argc, char const *argv[])
{
    float arr[5];

    get_array(arr);

    std::cout << "\nHIGHEST SALARY :  " << largest(arr) << " \n";
    std::cout << "\nLOWEST SALARY :  " << smallest(arr) << " \n";
    std::cout << "\nAVERAGE SALARY :  " << sum(arr) / 10.0 << " \n";
    return 0;
}

void get_array(float arr[])
{
    std::cout << "\nPlease enter 10 persons' salaries:  \n";
    for(int i=0; i<5; ++i)
    {
        std::cout << "Person  [" << i+1 << "]  ";
        std::cin >> arr[i];
    }
}

float largest(float arr[])
{
    float large = arr[0];
    for(int i=0; i<5; ++i)
    {
        if(arr[i] > large)
            large = arr[i];
    }

    return large;
}

float smallest(float arr[])
{
    float small = arr[0];
    for(int i=0; i<5; ++i)
    {
        if(arr[i] < small)
            small = arr[i];
    }

    return small;
}

float sum(float arr[])
{
    float sum = 0.0f;
    for(int i=0; i<10; ++i)
    {
        sum += arr[i];
    }
    return sum;
} 
