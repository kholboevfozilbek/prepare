
#include <iostream>

int distincts(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int a, b, c;
    std::cout << "Enter 3 integers:  ";
    std::cin >> a >> b >> c;

    std::cout << "\nNumber of distinct values: " << distincts(a, b, c) << " \n";
    return 0;
}

int distincts(int a, int b, int c)
{
    int arr[3] = {a, b, c};

    int counter= 0;
    
    for(int i=0; i<3; ++i)
    {
        if(i != 2)
        {
            for(int j = i+1; j<3; ++j)
            {
                if(arr[i] != arr[j])
                    ++counter;
            }
        }
    }

    return counter;
}