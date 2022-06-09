
#include <iostream>

float average(int a, int b, int c);
int greatest(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int a, b, c;

    std::cout << "Enter 3 integers:  ";
    std::cin >> a >> b >> c;

    std::cout << "\nAverage:  " << average(a, b, c) << "\n";
    std::cout << "Greatest:  " << greatest(a, b, c) << "\n";

    return 0;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int greatest(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    int gr = arr[0];

    for(int x : arr)
    {
        (x > gr)? gr=x : gr;
    }

    return gr;
}
