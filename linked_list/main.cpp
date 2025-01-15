#include <iostream>

int main()
{
   
    // creating a linked list
    struct Node
    {
        int data;
        Node *link;
    };

    Node *head;
    head = NULL;

    // Node* temp = (Node*)malloc(sizeof(Node));
    Node *temp = new Node();

    temp->data = 2;
    temp->link = NULL;

    head = temp;

    // print A

    // adding new node and store 4 in it

    temp = new Node();
    temp -> data = 4;
    temp -> link = NULL;

    // link the new node to the previous node

    Node* temp1 = head;    

    // loop through the linked list to find the last node
    while(temp1->link != NULL)
    {
        temp1 = temp1->link;
    }


    // link the last node to the new node
    temp1->link = temp;


    // adding another node and store 6 in it
    temp = new Node();
    temp -> data = 6;
    temp -> link = NULL;

    // link the new node to the previous node
    
    while(temp1->link != NULL)
    {
        temp1 = temp1->link;
    }

    // link the last node to the new node
    temp1->link = temp;

    return 0;
}