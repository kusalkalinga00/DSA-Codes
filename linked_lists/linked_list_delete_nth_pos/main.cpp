#include <iostream>

struct Node
{
    int data;
    Node *link;
};

Node *head; // global variable list head

void Insert(int data, int n)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->link = NULL;

    if (n == 1)
    {
        temp1->link = head;
        head = temp1;
        return;
    }

    Node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;
}

void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->link;
    }
    std::cout << std::endl;
}

void Delete(int n) {
    Node* temp1 = head;

    if (n ==1){
        head = temp1 -> link;
        delete temp1;
        return;
    }

    for (int i = 0; i < n-2; i++){
        temp1 = temp1->link;
    }
    Node* temp2 = temp1->link;
    temp1 -> link = temp2 -> link;
    delete temp2;
}

int main()
{
    head = NULL; // empty list
    Insert(2, 1);
    Insert(3, 2);
    Insert(4, 3);
    Insert(5, 4);
    Insert(6, 5);
    Print(); // List: 2 3 4 5 6
    Delete(1); // List:  3 4 5 6
    Print();
}