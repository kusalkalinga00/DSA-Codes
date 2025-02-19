#include <iostream>

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void Enqueue(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;
}

void Dequeue()
{
    Node *temp = front;
    if (front == NULL)
    {
        return;
    }

    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }

    delete temp;
}

void Print()
{
    Node *temp = front;
    while (temp != NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main()
{
    Enqueue(2);
    Print();
    Enqueue(4);
    Print();
    Enqueue(6);
    Print();
    Dequeue();
    Print();
    Enqueue(8);
    Print();
}
