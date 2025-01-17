#include <iostream>

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head;

Node *getNewNode(int n)
{
    Node *temp = new Node();
    temp->data = n;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void InsertAtHead(int n)
{
    Node *newNode = getNewNode(n);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(int n){
    Node *newNode = getNewNode(n);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;

    
    
}

void Print()
{
    Node *temp = head;
    std::cout << "Forward: ";

    while (temp != NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void ReversePrint()
{
    Node *temp = head;
    if (temp == NULL)
        return;

    // going to the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // traversing backwards using prev pointer
    std::cout << "Reverse: ";
    while (temp != NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->prev;
    }
    std::cout << std::endl;
}





int main()
{

    head = NULL;
    insertAtTail(2);
    Print();
    insertAtTail(4);
    Print();
    insertAtTail(6);
    Print();
    
    
}