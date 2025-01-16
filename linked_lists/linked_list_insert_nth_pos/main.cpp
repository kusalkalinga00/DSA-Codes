#include <iostream>

 struct Node
 {
    int data;
    Node *link;
 };

  Node* head; // global variable list head


  void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->link = NULL;

    if (n == 1){
        temp1->link = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;
    for (int i = 0; i < n-2; i++){
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;

  }

  void Print(){
    Node* temp = head;
    while (temp != NULL){
        std::cout << temp->data << " " ;
        temp = temp->link;
    }
    std::cout << std::endl;


  }

int main(){
    head = NULL; // empty list
    Insert(2,1); // List: 2
    Insert(3,2); // List: 2, 3
    Insert(4,1); // List: 4, 2, 3
    Insert(5,2); // List: 4, 5, 2, 3
    Insert(5,5); // List: 4, 5, 2, 3, 5
    Print();
}