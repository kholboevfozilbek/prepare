
#include <iostream>

int main(int argc, char const *argv[])
{
    int next = 2500;
    for(int i=0; i<6; ++i)
    {
        next += next*0.04;
        std::cout << "Year " << i+1 << ": " << next << " \n";
    }    
    return 0;
}
