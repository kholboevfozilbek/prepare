
#include <iostream>

int main(int argc, char const *argv[])
{
    for(int i=5; i<=30; i+=5)
    {
        std::cout << "After " << i << " minutes: " << i*3.6 << " calories \n";
    }
    return 0;
}
