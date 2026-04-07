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
int getLength(Node* &head){
     int i = 0;
     Node* temp = head;
     while(temp != nullptr){
          i++;
          temp = temp -> next;
     }
     return i ;
}
//-------------------------------------------------------------------
void deleteNodeAtTail(Node* &head,Node* &tail){
     int len = getLength(head);
     int i =1;
     Node* prev = head;

     while(i<len-1){
          prev = prev->next;
          i++;
     }
     
     prev->next =NULL;
     Node* temp = tail;
     tail = prev;
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