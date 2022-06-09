
#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <stack>

using namespace std;

int evaluate(string);

int main()
{
    cout << evaluate("5 5 +") << endl;
    cout << evaluate("8 2 /") << endl;
    cout << evaluate("5 4 *") << endl;
    cout << evaluate("5 2 3 + *") << endl;
    cout << evaluate("5 2 + 3 *") << endl;
    //cout << evaluate("1 2 3 4 + + + +") << endl; 
    cout << evaluate("1 2 + 3 + 4 +") << endl;
    cout << evaluate("1 2 + 3 p") << endl;
    cout << evaluate("5 4 3 2 1 + p * p") << endl;
}

int evaluate(string buffer)
{
    stack<int> main_stack;
    stack<char> last_oper;

    std::string::iterator end_pos = std::remove(buffer.begin(), buffer.end(), ' ');
    buffer.erase(end_pos, buffer.end()); // just take out the spaces -> we ignore it anyways

    for(int i=0; i<buffer.size(); ++i)
    {
        if(isdigit(buffer[i]))
        {
            main_stack.push((int)buffer[i] - 48);
        }
        else
        {
            switch (buffer[i])
            {
            case '+': {
                int topmost = main_stack.top(); main_stack.pop();
                int aftertop = main_stack.top(); main_stack.pop();
                main_stack.push(topmost+aftertop);
                last_oper.push('+');
                break;
            }
            case '-':{
                int topmost = main_stack.top(); main_stack.pop();
                int aftertop = main_stack.top(); main_stack.pop();
                main_stack.push(topmost-aftertop);
                last_oper.push('-');
                break;
            }
            case '*': {
                int topmost = main_stack.top(); main_stack.pop();
                int aftertop = main_stack.top(); main_stack.pop();
                main_stack.push(topmost*aftertop);
                last_oper.push('*');
                break;
            }
            case '/': {
                int topmost = main_stack.top(); main_stack.pop();
                int aftertop = main_stack.top(); main_stack.pop();
                main_stack.push(topmost/aftertop); // 2 / 8 = 0.25 -> since only ints we get 0 
                last_oper.push('/');
                break;
            }
            case 'p': {
                char last_op = last_oper.top();
                int topmost = main_stack.top(); main_stack.pop();
                int aftertop = main_stack.top(); main_stack.pop();
                switch (last_op)
                {
                    case '+': {
                        main_stack.push(topmost+aftertop);
                        last_oper.push('+');
                        break;
                    }
                    case '-':{
                        main_stack.push(topmost-aftertop);
                        last_oper.push('-');
                        break;
                    }
                    case '*': {
                        main_stack.push(topmost*aftertop);
                        last_oper.push('*');
                        break;
                    }
                    case '/': {
                        main_stack.push(topmost/aftertop); // 2 / 8 = 0.25 -> since only ints we get 0 
                        last_oper.push('/');
                        break;
                    }
                    default:
                    break;
                }
            }

            default:
                break;
            }
        }
    }

    return main_stack.top();
}