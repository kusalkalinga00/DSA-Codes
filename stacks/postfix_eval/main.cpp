#include <iostream>
#include <stack>
using namespace std;

stack<char> S;

void evaluatePostfix(string exp)
{
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] >= '0' && exp[i] <= '9')
        {
            S.push(exp[i] - '0');
        }
        else
        {
            int op2 = S.top();
            S.pop();
            int op1 = S.top();
            S.pop();
            switch (exp[i])
            {
            case '+':
                S.push(op1 + op2);
                break;
            case '-':
                S.push(op1 - op2);
                break;
            case '*':
                S.push(op1 * op2);
                break;
            case '/':
                S.push(op1 / op2);
                break;
            }
        }
    }
    cout << S.top() << endl;
}

int main()
{
    string exp = "23*54*+9-";
    evaluatePostfix(exp);

    int result = S.top();
    cout << result << endl;
}
