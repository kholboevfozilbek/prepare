
#include <iostream>
#include <ctime>

void print(int* arr, int n);
void generate_array(int* arr, int n, int a, int b);
void first_positive(int* arr, int n);
void last_positive(int* arr, int n);

int main(int argc, char const *argv[])
{
    std::srand(time(NULL));
    int n=0, a, b;
    int* arr;

    std::cout << "\nGive the length of the array:  ";
    std::cin >> n;

    if(n > 0)
    {
        arr = new int[n];

        std::cout << "\nGive the range [a,b]  \n";
        std::cout << "a: "; std::cin >> a;
        std::cout << "b: "; std::cin >> b;

        generate_array(arr, n, a, b);
        print(arr, n);

        first_positive(arr, n);   
        last_positive(arr, n);   

    }

    return 0;
}

void print(int* arr, int n)
{
    std::cout << "Numbers of the array:  \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "  ";
    }
    std::cout << " \n";
}

void generate_array(int* arr, int n, int a, int b)
{
    for(int i=0; i<n; ++i)
    {
        arr[i] = rand() % (b-a + 1) + a;
    }
}

void first_positive(int* arr, int n)
{
    std::cout << "The first positve number is ";

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            std::cout << arr[i] << " is located at index " << i << " \n";
            break;
        }
    }
    
}

void last_positive(int* arr, int n)
{
    std::cout << "The last positve number is ";

    for (int i = n-1; i >= 0; --i)
    {
        if(arr[i] > 0)
        {
            std::cout << arr[i] << " is located at index " << i << " \n";
            break;
        }
    }
    
}