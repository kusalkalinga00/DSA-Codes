#include <iostream>

 // creating a linked list
 struct Node
 {
    int data;
    Node *link;
 };


 Node* head; // global variable list head

 void Insert(int x){
        Node* temp = new Node();
        temp->data = x;
        temp->link = head;
        head = temp;
 }


 void Print(){
        Node* temp = head;
        std::cout << "List is: ";
        while(temp != NULL){
            std::cout << temp->data << " ";
            temp = temp->link;
        }
        std::cout << std::endl;
 }

int main(){

    head = NULL; // empty list
    // print how numbers are to be entered
    std::cout << "Enter the number of elements you want to enter: " << std::flush;

    int n,i,x;
    std::cin >> n;

    for (i = 0; i < n; i++){
        std::cout << "Enter the number: " << std::flush;
        std::cin >> x;
        Insert(x);
        Print();
    }

    return 0;


}