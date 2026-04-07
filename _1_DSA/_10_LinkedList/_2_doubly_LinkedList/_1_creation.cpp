#include<bits/stdc++.h>
using namespace std;
//------------------------------------------------------------------------------
class Node{
     public:
     Node* prev;
     Node* next;
     int data;

     Node(){
          (*this).prev = NULL;
          (*this).next=NULL;
          this -> data=0;
     }
     Node(int value){
          this->prev = NULL;
          this-> next =NULL;
          this->data = value;
     }
};
//-------------------------------------------------------------------------------------
void PrintLinkedList(Node* &head){
     Node* temp = head;

     while(temp != nullptr){
          cout << temp -> data <<" ";
          temp = temp -> next;
     }
}

//-------------------------------------------------------------------------------------
int PrintLength(Node* &head){
     int i =0;
     Node* temp = head;

     while(temp != nullptr){
          i++;
          temp = temp->next;
     }

     return i;
}
//--------------------------------------------------------------------------------------------
int main(void){

     Node* first = new Node(10);
     Node* second = new Node(20);

     first -> next = second;
     second ->prev = first ;

     cout <<"the linked list is " << endl;
     PrintLinkedList(first);
     cout << endl;
     cout << "The length is " << PrintLength(first)<< endl;
     return 0;
}