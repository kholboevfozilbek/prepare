
#include <iostream>

bool correct_grade(float x);
void get_weights(int n, int* weights);
float top_value(float* grades, int* weights, int n);
int sum_weights(int n, int* weights);


int main(int argc, char const *argv[])
{
    int size;
    float* grades;
    int* weights;

    float temp;
    std::cout << "How many grades? : ";
    std::cin >> size;

    grades = new float[size];
    weights = new int[size];

    for(int i=0; i<size; ++i)
    {
        do 
        {
            std::cout << i+1 << ":  ";
            std::cin >> temp;

        } while(correct_grade(temp) == false);
        
        grades[i] = temp;
    }

    get_weights(size, weights);

    std::cout << "\nWeighted Average: " << top_value(grades, weights, size)/sum_weights(size, weights) << " \n";
    


    return 0;
}

bool correct_grade(float x)
{
    if(x == 2 || x == 3 || x == 3.5 || x == 4 || x == 4.5 || x == 5)
        return true;
    return false;
}

void get_weights(int n, int* weights)
{
    std::cout << "Enter corresponding weights (in coorect order!):  \n";

    int temp;
    for(int i=0; i<n; ++i)
    {
        do
        {
            std::cout << i+1 << ": ";
            std::cin >> temp;
        } while (temp <= 0);
        
        weights[i] = temp;
    }
}

float top_value(float* grades, int* weights, int n)
{
    float sum = 0.0f;

    for(int i=0; i < n; ++i)
    {
        sum += weights[i]*grades[i];
    }
    return sum;
}

int sum_weights(int n, int* weights)
{
    int sum = 0;
    for(int i=0; i<n; ++i)
    {
        sum += weights[i];
    }
    return sum;
}

