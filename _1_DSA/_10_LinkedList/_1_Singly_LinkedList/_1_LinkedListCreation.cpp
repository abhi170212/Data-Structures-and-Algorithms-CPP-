#include<bits/stdc++.h>
using namespace std;


//-----------------------------------------------------------------------------

class Node{
public:
     int data;
     Node* next;
     Node(){
          (*this).data=0;
          (*this).next = nullptr;
     }
     Node(int data){
          this -> data = data ;
          this -> next = NULL;
     }
};

int main(void){
     // creating the nodes ------------------------------------------------------ 

     Node* first = new Node(10);
     Node* second = new Node(20);
     Node* third = new Node(30);
     Node* fourth = new Node(40);

     // linking the nodes -------------------------------------------------------

     (*first).next = second;
     (*second).next = third;
     (*third).next = fourth;
     (*fourth).next = nullptr;

     //---------------------------------------------------------------------------

     cout << "Everything is working" << endl;

     
     return 0;
}