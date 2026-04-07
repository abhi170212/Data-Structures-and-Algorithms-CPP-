#include<bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------
class Node{
     public:
     int data;
     Node* next;

     Node(int data){
          this->data = data;
          this->next = nullptr;
     }
     ~Node(){
          cout <<"Value deleted " << this->data << endl;
     }
};
//-------------------------------------------------------------------
void PrintLinkedList(Node* &head){
     Node* temp = head;

     while(temp != NULL){
          cout << temp -> data << "  " ;
          temp = temp->next;
     }
}

//-------------------------------------------------------------------
void deleteNodeAtHead(Node* &head){
     Node* temp = head;
     head = head -> next ; 
     temp -> next = nullptr;
     delete temp;
}
//-------------------------------------------------------------------
int main(void){
     Node* first = new Node(1);
     Node* second = new Node(2);
     first -> next = second;

     deleteNodeAtHead(first);
     PrintLinkedList(first);


     return 0;
}