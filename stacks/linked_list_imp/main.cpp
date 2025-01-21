#include <iostream>


struct Node
{
    int data;
    Node* link;
};


Node *top = NULL;

void Push(int x)
{
    Node* temp =new Node();
    temp -> data = x;
    temp -> link = top;
    top = temp;
}

void Pop()
{
    Node *temp;

    if (top == NULL)
    {
        std::cout << "Error: No element to pop\n";
        return;
    }

    temp = top;
    top = top -> link;
    delete temp;
}

void Print()
{
    Node* temp = top;
    std::cout << "Stack: ";
    while (temp != NULL)
    {
        std::cout << temp -> data << " ";
        temp = temp -> link;
    }
    std::cout << std::endl;
}

int main(){
    Push(2);
    Print();
    Push(5);
    Print();
    Push(10);
    Print();
    Pop();
    Print();
    Push(12);
    Print();
}