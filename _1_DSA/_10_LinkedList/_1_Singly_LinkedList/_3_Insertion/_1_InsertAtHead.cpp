#include<bits/stdc++.h>
using namespace std; 
//-------------------------------------------------------------------------------------------------
class Node{
     public:
          int data;
          Node* next;
          Node(){
               this->data=0;
               this->next=nullptr;
          }
          Node(int data){
               this->data = data;
               this-> next=NULL;
          }
};
//----------------------------------------------------------------------------------------------------
void PrintLinkedList(Node* &head){
     Node* temp = head; 
     while ( temp!= NULL){
          cout << temp -> data <<" ";
          temp = temp->next;
     }
}
//----------------------------------------------------------------------------------------------------
void InsertAtHead(int data,Node* &head,Node* &tail){
     if(head == NULL){
          Node* np = new Node(data);
          head = np;
          tail = np;
          return;
     }

     Node* np = new Node(data);
     (*np).next = head;
     head = np;
}
//--------------------------------------------------------------------------------------------------------

int main(void){

     // head and tail creation 
     Node* head= NULL;
     Node* tail = NULL;
     
     //-----------------------
     InsertAtHead(10,head,tail);
     PrintLinkedList(head);
     
     
     return 0;
}