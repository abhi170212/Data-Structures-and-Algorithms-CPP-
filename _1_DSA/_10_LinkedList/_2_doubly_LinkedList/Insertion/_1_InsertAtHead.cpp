#include<bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------
class Nd{
     public:
     int data;
     Nd* next;
     Nd* prev;

     Nd(int data){
          this-> next = NULL;
          this->prev = NULL;
          this->data = data;
     }
};
//------------------------------------------------------------------------
void PrintLinkedList(Nd* &head){
     Nd* temp = head;

     while(temp != nullptr){
          cout << temp -> data <<" ";
          temp = temp -> next;
     }
}
//------------------------------------------------------------------------
void InsertAtHead(Nd* &head,int data,Nd* &tail){
     
     if(head == nullptr){
          Nd* newNode = new Nd(data);
          head = newNode;
          tail = newNode;
          return;
     }
     Nd* newNode = new Nd(data);
     head -> prev = newNode;
     newNode -> next = head ; 
     head = newNode; 
   
}

//-------------------------------------------------------------------------------
int main(void){
     Nd* first = NULL;
     Nd* last = NULL;
     InsertAtHead(first,1,last);
     InsertAtHead(first,2,last);
     PrintLinkedList(first);
     return 0;
}