#include<bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------------
class Node{
     public:
     int data;
     Node* next ; 
     Node(){
          this->data = 0;
          this->next = nullptr;
     }
     Node(int data){
          this->data = data ;
          this->next = nullptr;
     }
};
//----------------------------------------------------------------------------------
//PRINTING THE LINKED LIST 
void printLinkedList(Node* &head){
     Node* temp = head;
     while(temp!= nullptr){
          cout << temp->data<<" ";
          temp = temp->next;
     }
}
//---------------------------------------------------------------------------------------
//INSERTING AT LAST 
void InsertAtTail(Node* &head,Node* &tail,int data){
     if(head == nullptr){
          Node* np = new Node(data);
          head = np;
          tail=np;
          return;
     }
     // if not empty ,
     Node* np = new Node(data);
     tail-> next = np;
     tail = np;
}

int main(void){
     // creating the nodes 
     Node* h1 = new Node(10);
     Node* h2 = new Node(20);
     Node* h3 = new Node(20);

     h1->next = h2;
     h2->next = h3;

     InsertAtTail(h1,h3,400);
     printLinkedList(h1);


     return 0;
}