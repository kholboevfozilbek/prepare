
#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(4);
    d.push_front(5);

    cout << "\nSize:  " << d.size() << " \n";
    cout << "Front:  " << d.front() << " \n";
    cout << "Back:  " << d.back() << " \n";
    for(auto it = d.begin(); it != d.end(); ++it)
    {
        cout << *it << "  ";
    }

    d.emplace_front(2003);
    d.emplace_back(2010);
    
    return 0;
}
