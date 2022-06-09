

#include <iostream>
#include <ctime>

void display(int arr[3][4]);

int main(int argc, char const *argv[])
{
    std::srand(time(NULL));
    int arr[3][4];

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            arr[i][j] = rand() % 20;
        }
    }

    display(arr);
    std::cout << "\nSum from cols: ";
    int sum = 0;
    for(int i=0; i<4; ++i)
    {
        sum = 0;
        for(int j=0; j<3; ++j)
        {
            sum += arr[j][i];
        }
        std::cout << sum << "  ";
    }   

    return 0;
}

void display(int arr[3][4])
{
    std::cout << "\nMatrix 3x4 \n";
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
}
