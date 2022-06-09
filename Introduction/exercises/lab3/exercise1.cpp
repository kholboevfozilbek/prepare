
#include <iostream>


int main(int argc, char const *argv[])
{
    const float rise = 1.5;

    for(int i=1; i<=25; ++i)
    {
        std::cout << "Year " << i << ": " << i*rise << "\n";
    }
    return 0;
}
