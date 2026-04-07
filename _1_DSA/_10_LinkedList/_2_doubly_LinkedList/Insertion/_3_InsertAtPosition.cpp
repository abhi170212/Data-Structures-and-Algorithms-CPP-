#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------------------------------------
class Node{
     public:
     int data;
     Node* prev = NULL;
     Node* next = NULL;

     Node(int data){
          this->data = data;
          (*this).next = NULL;
          this->prev = NULL;
     }
     ~Node(){
          cout <<"Dtor was called" << endl;
     }
};
//-----------------------------------------------------------------------
int getLength(Node* &head){
     Node* temp = head;
     int i =0;
     while(temp != nullptr){
          i++;
          temp = temp->next;
     }

     return i ;
}
//--------------------------------------------------------------------------
void PrintLinkedList(Node* &head){
     if(head == nullptr) return ;
     cout << head-> data <<" ";
     return PrintLinkedList(head->next);
}
//---------------------------------------------------------------------------
void InsertAtHead(Node* &head,Node* &tail,int data){
     if(head == nullptr){
          Node* newNode = new Node(data);
          head = tail = newNode;
          return; 
     }

     Node* newNode = new Node(data);
     newNode->next=head;
     head->prev = newNode;
     newNode=head;
     return;
}
//------------------------------------------------------------------------------
void InsertAtTail(Node* &head,Node* &tail,int data){
     if(head == nullptr){
         Node* newNode = new Node(data);
         head = tail = newNode;
         return;
     }
      Node* newNode = new Node(data);
     tail->next = newNode;
     newNode->prev = tail;
     tail = newNode;
}
//----------------------------------------------------------------------------
void InsertAtNode(Node* &head,Node* &tail,int position, int data){
     if(position == 1){
          InsertAtHead(head,tail,data);
          return;
     }
     bool lastPosition = getLength(head) == position ? true:false;
     if(lastPosition){
          InsertAtTail(head,tail,data);
          return;
     }

     int i=0;
     Node* left = head;
     while(i<position-1){
          left = left -> next;
          i++;
     }

     Node* curr = left->next;
     Node* newNode= new Node(data);

     left->next = newNode;
     newNode->prev = left;

     curr->prev = newNode;
     newNode->next = curr;
     return;

}
int main(void){
     Node* first = new Node(1);
     Node* second = new Node(2);

     first -> next = second;
     second->prev = first;

     InsertAtNode(first,second,2,3);
     PrintLinkedList(first);

     return 0;
}