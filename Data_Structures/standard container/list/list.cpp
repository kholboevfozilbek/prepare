
#include <iostream>
#include <list>
#include <vector>

using namespace std;

bool is_odd(int a);
struct single_digit
{
    bool operator() (const int& value) {return (value < 10);}
};

int main(int argc, char const *argv[])
{
    list<int> l;
    list<int>::iterator it;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);
    l.emplace_back(7);
    l.emplace_front(6);

    l.pop_back();
    l.pop_front();
    it = l.begin();
    ++it;
    l.insert(it, 2003);
    l.insert(it, 3, 2000);
    vector<int> v (2, 1970);

    --it;   
    l.insert(it, v.begin(), v.end());

    for(auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << "\nSize: " << l.size();
    cout << "\nFront: " << l.front();
    cout << "\nBack: " << l.back() <<  " \n\n";

    it = l.begin();
    l.remove_if(single_digit());
    cout << "\nSingle digit values have been removed \n";

    for(auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << "\nSize: " << l.size();
    cout << "\nFront: " << l.front();
    cout << "\nBack: " << l.back() <<  " \n\n"; 
    cout << *it << "\n";
    return 0;
}

bool is_odd(int a) 
{
    return (a%2) == 1;
}
