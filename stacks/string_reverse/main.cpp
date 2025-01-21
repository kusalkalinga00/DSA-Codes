#include <iostream>
#include <stack>
using namespace std;



void Reverse(char *C, int n)
{
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        S.push(C[i]);
    }
    for (int i = 0; i < n; i++)
    {
        C[i] = S.top();
        S.pop();
    }
}



int main() {
    char C[51];    
    strcpy(C, "Kusal");
    Reverse(C,strlen(C));
    printf("Output: %s",C);
}