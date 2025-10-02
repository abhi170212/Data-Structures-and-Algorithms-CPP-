#include <iostream>
using namespace std;

// ^ building the nodes
class Node
{
public:
     int data;
     Node *left;
     Node *right;
     Node(int data)
     {
          this->data = data;
          left = NULL;
          right = NULL;
     }
};

// & tree making -> using recursion

Node* buildTree()
{
     int data;
     cout << "Enter data for the tree" << endl;
     cin >> data;
     if(data == -1) return NULL;
     Node* root = new Node(data);
     root -> left = buildTree();
     root-> right = buildTree();
     return root;
     
};

int main(void)
{
     Node* newRoot = NULL;
     newRoot = buildTree();

     return 0;
}