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

void DeleteAtHead(Node* &head){
     Node* temp = head;
     head = head->next;
     temp->next = NULL;
     temp->prev = NULL;
     delete temp; 
}
//-------------------------------------------------------------------------
void PrintLinkedList(Node* &head){
     Node* temp = head;

     while(temp != nullptr){
          cout << temp -> data <<" ";
          temp = temp -> next;
     }
}
//-----------------------------------------------------------------------
int main(void){
     Node* one = new Node(1);
     Node* two = new Node(2);
     Node* three = new Node(3);

     one->next = two;
     two->prev = one;

     two->next =three;
     three -> prev = two;

     DeleteAtHead(one);
     PrintLinkedList(one);
     return 0;
}