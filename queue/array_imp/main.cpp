#include <iostream>

int A[10];

int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Enqueue(int x)
{
    if ((rear + 1) % 10 == front)
    {
        std::cout << "Error: Queue is full\n";
        return;
    }
    else if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % 10;
    }
    A[rear] = x;
}

void Dequeue()
{
    if (isEmpty())
    {
        std::cout << "Error: Queue is empty\n";
        return;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % 10;
    }
}

void Print()
{
    int count = (rear + 10 - front) % 10 + 1;
    std::cout << "Queue: ";
    for (int i = 0; i < count; i++)
    {
        int index = (front + i) % 10;
        std::cout << A[index] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    Enqueue(2);
    Print();
    Enqueue(5);
    Print();
    Enqueue(10);
    Print();
    Dequeue();
    Print();
    Enqueue(12);
    Print();
    Enqueue(15);
    Print();
}
