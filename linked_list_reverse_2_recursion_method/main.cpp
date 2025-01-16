#include <iostream>

struct Node
{
    int data;
    Node *link;
};

Node *head = NULL;

Node *Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;

        while (temp1->link != NULL)
        {
            temp1 = temp1->link;
        };
        temp1->link = temp;
    }
    return head;
}

void Print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        std::cout << temp->data << " " ;
        temp = temp->link;
    }
    std::cout << std::endl;
}

// recursive print
// void Print(Node* head){
//     if (head == NULL){
//         std::cout << std::endl;
//         return;
//     }
//     std::cout << head->data << " ";
//     Print(head->link);
// }

// reverse order print
// void PrintReverse(Node* head){
//     if (head == NULL){
//         std::cout << std::endl;
//         return;
//     }
//     PrintReverse(head->link);
//     std::cout << head->data << " ";
// }

// Node* Reverse(Node* head){
//     Node *current, *prev, *next;
//     current = head;
//     prev = NULL;
//     while (current != NULL){
//         next = current->link;
//         current->link = prev;
//         prev = current;
//         current = next;
//     }
//     head = prev;
//     return head;
// }

void  Reverse(Node* p){
    if(p-> link == NULL){
        head = p;
        return;
    }

    Reverse(p->link);
    Node* q = p->link;
    q->link = p;
    p->link = NULL;
}



int main()
{
    Insert(2); // List: 2
    Insert(4); // List: 2, 4
    Insert(6); // List: 2, 4, 6
    Insert(5); // List: 2, 4, 6, 5
    Print(head);
    Reverse(head);
    Print(head);
   
}