#include <iostream>

struct Node
{
    int data;
    Node *link;
};

Node* Insert(Node* head, int data){
    Node* temp = new Node();
    temp->data = data;
    temp->link = NULL;

    if (head == NULL){
        head = temp;
    }
    else{
        Node* temp1 = head;
        
        while (temp1->link != NULL){
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


Node* Reverse(Node* head){
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}



int main(){

    Node* head = NULL;
   
    head = Insert(head, 2); // List: 2
    head = Insert(head, 4); // List: 2, 4
    head = Insert(head, 6); // List: 2, 4, 6
    head = Insert(head, 8); // List: 2, 4, 6, 8
    Print(head);
    head = Reverse(head);
    Print(head);
}