


#include <iostream>
#include <ctime>

void print(int* arr, int n);
void generate_array(int* arr, int n, int a, int b);
int recurring_number(int* arr, int n);

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

        std::cout << "\nNumber " << recurring_number(arr, n) << " recurs \n";
        int r = recurring_number(arr, n);

        for(int i=0; i<n; ++i)
        {
            if(arr[i] == r)
                std::cout << "( " << arr[i] << " )" << "  ";
            else
                std::cout << arr[i] << "  ";
        }

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

int recurring_number(int* arr, int n)
{
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        for (int  j = i+1; j < n; ++j)
        {
            if(arr[i] == arr[j])
            {
                index = i;
            }
        }
        
    }
    return arr[index]; // the first recurring number
}