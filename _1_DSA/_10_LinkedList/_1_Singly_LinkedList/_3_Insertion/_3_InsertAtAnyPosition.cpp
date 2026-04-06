#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------------------------------------------------------
class Node{
     public:
     int value;
     Node* next;
     Node(){
          this->next=NULL;
          this->value=0;
     }

     Node(int data){
          this->value = data;
          this->next=NULL;
     }

};
//-----------------------------------------------------------------------------------
void printLinkedList(Node* head){
    if(head == NULL) return;
    cout << head-> value <<" ";
    printLinkedList(head->next);
}
//-----------------------------------------------------------------------------------
int getLength(Node* &head){
     int len=0;
     Node* temp = head;

     while(temp!= NULL){
          len++;
          temp = temp->next;
     }
     return len;
}
//-----------------------------------------------------------------------------------
void InsertAtHead(Node* &head,Node* &tail,int value){
     if(head == NULL){
          Node* np = new Node(value);
          head = np;
          tail=np;
          return;
     }

     Node* np = new Node(value);
     np->next = head;
     head = np;
}
//-------------------------------------------------------------------------------------------
void InsertAtTail(Node* &head,Node* &tail,int value){
     if(head == NULL){
          Node* np = new Node(value);
          head = np;
          tail = np;
          return;
     }
     Node* np = new Node(value);
     tail -> next = np;
     tail = np;
}
//---------------------------------------------------------------------------------------------
void InsertAtAnyPosition(Node* &head,Node* & tail,int position,int value){
     int length= getLength(head);
     if(position == 0) {
          InsertAtHead(head,tail,value);
          return;
     }else if(length <= position){
          InsertAtTail(head,tail,value);
          return;
     }

     // find prev and current 
     Node* prev = head;
     int i =0;
     while(i<position-1){
          prev = prev-> next;
          i++;
     }
     Node* curr = prev-> next;

     Node* np = new Node(value);
     np-> next = curr;
     prev->next = np;


}
int main(void){
     Node* head = new Node(10);
     Node* head2 = new Node(20);
     Node* head3 = new Node(30);
     Node* head4 = new Node(40);
     Node* head5 = new Node(50);
     head->next = head2;
     head2->next = head3;
     head3->next = head4;
     head4->next=head5;
     InsertAtAnyPosition(head,head5,1,17);
     InsertAtAnyPosition(head,head5,0,18);
     InsertAtAnyPosition(head,head5,90,19);
     printLinkedList(head);
   
     return 0;
}