#include <iostream>
#include <iostream>
#include <stack>
using namespace std;

void check_balanced_parenthesis(string s)
{
    stack<char> S;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            S.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            char top = S.top();
            if ((S.empty()) || (s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') || (s[i] == ']' && top != '['))
            {
                std::cout << "Not balanced" << std::endl;
                return;
            }
            else
            {
                S.pop();
            }
           
           
        }
    }

    if (S.empty())
    {
        std::cout << "Balanced" << std::endl;
    }
    else
    {
        std::cout << "Not balanced" << std::endl;
    }
}

int main()
{
    string s = "{[()[()](]}";
    check_balanced_parenthesis(s);
    return 0;
}
