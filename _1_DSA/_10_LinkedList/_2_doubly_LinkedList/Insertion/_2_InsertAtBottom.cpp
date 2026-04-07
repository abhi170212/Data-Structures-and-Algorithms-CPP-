#include<bits/stdc++.h>
using namespace std;
//--------------------------------------------------------------
class Node{
     public:
     int data;
     Node* next;
     Node* prev;

     Node(int data){
          this->data=data;
          this->next = NULL;
          this->prev=NULL;
     }
};
//-----------------------------------------------------------------
void PrintLinkedList(Node* &head){
     Node* temp = head;

     while(temp != nullptr){
          cout << temp -> data <<" ";
          temp = temp -> next;
     }
}
//--------------------------------------------------------------------
void InsertAtTail(Node* &head,int data,Node* &tail){
     if(head==nullptr){
          Node* newNode = new Node(data);
          head = newNode;
          tail = newNode;
          return;
     }
     Node* newNode = new Node(data);
     tail -> next = newNode;
     newNode->prev = tail;
     tail = newNode;
     


}
//-----------------------------------------------------------------------
int main(void){
     Node* first = new Node(10);
     Node* second = new Node(20);

     first->next=second;
     second->prev = first;

     InsertAtTail(first,30,second);
     PrintLinkedList(first);

     return 0;
}