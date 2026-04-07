#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------------
class Node{
     public:
          int data;
          Node* prev =NULL;
          Node* next = NULL;

          Node(int data){
               this-> prev = NULL;
               this->next = NULL;
               this->data = data;
          }
          ~Node(){
               cout <<"Dtor has been called" << endl;
          }
};
//-------------------------------------------------------------------------

void DeleteAtTail(Node* &head,Node* &tail){
     Node* temp = tail;
     tail = tail ->prev ;

     // garbage value idhar show hogi to usko manage krna hai    [IMPORTANT]
     if(tail != nullptr){
          tail->next = nullptr;
     }
     //--------------------------------------------------------------------

     temp -> next = NULL;
     temp -> prev = NULL;
     delete temp;

} 
//------------------------------------------------------------------------
int getLength(Node* &head){
     int i =0;
     Node* temp = head ;
     while( temp -> next != nullptr){
          i++;
          temp = temp->next;
     }
     return i;
}
//------------------------------------------------------------------------
void PrintLinkedList(Node* &head){
     Node* temp = head;
     cout << temp -> data<<" ";
     return PrintLinkedList(temp->next);
}
//------------------------------------------------------------------------
void DeleteAtNode(Node* &head,Node* &tail,int position){
     if(position == 1){
          DeleteAtHead(head);
          return;
     }
     if(position == getLength(head)){
          DeleteAtTail(head,tail);
          return;
     }

     int i = 1;
     Node* left = head;
     while(i<position-1){
          i++;
          left=left->next;
     } 
     Node* curr = left->next;

     //delete the current
     Node* right = curr->next;

     left->next = right;
     right->prev = left;

     curr->next=nullptr;
     curr->prev = nullptr;
     
     delete curr;
}
//-------------------------------------------------------------------------
//------------------------------------------------------------------------
int main(void){
     Node* one = new Node(1);
     Node* two = new Node(2);
     Node* three = new Node(3);

     one->next = two;
     two->prev = one;

     two->next =three;
     three -> prev = two;

     DeleteAtTail(one,three);
     PrintLinkedList(one);

     return 0;
}