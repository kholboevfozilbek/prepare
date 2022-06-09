

#include <iostream>
#include <ctime>
#include <vector>


class question
{
    int a, b;

public:

    question() = default;

    question(int aa, int bb) {
        a = aa;
        b = bb;
    }

    bool operator!= (question &o)
    {
        if(this->a != o.a || this->b != o.b)
            return true;
        return false;
    }

    bool operator== (question &o)
    {
        if(this->a == o.a && this->b == o.b)
            return true;
        return false;
    }

    void setALL(int aa, int bb) {
        a = aa;
        b = bb;
    }
};

bool not_contains(question &temp, std::vector<question> &v);

int main(int argc, char const *argv[])
{
    int a, b, user, counter = 0;
    srand(time(NULL));
    std::vector<question> bank;
    question q(0, 0);
    bank.emplace_back(0, 0);

    for(int i=0; i<10; ++i)
    {
        question temp;
        do
        {
            a = rand() % 10;
            b = rand() % 10;
            temp.setALL(a, b);
        } while (not_contains(temp, bank) == true);
        

        std::cout << a << " * " << b << " = ";
        std::cin >> user;
        bank.emplace_back(temp);


        if(user == a*b)
        {
            std::cout << "Correct \n";
            ++counter;
        }
        else
        {
            std::cout << " Incorrect \n";
        }
    }

    std::cout << "\n--------------------------------\n";
    std::cout << "Your grade:  ";

    switch (counter)
    {
    case 10:
        std::cout << "5 \n";
        break;
    case 9:
        std::cout << "4.5 \n";
        break;
    case 8:
        std::cout << "4 \n";
        break;
    case 7:
        std::cout << "3.5 \n";
        break;
    case 6:
        std::cout << "3 \n";
        break;
    default:
        std::cout << "2 \n";
        break;
    }

    return 0;
}

bool not_contains(question &temp, std::vector<question> &v)
{
    for(int i=0; i<v.size(); ++i)
    {
        if(v[i] == temp)
            return true;
    }

    return false;
}