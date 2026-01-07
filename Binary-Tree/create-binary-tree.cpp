#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
void preOrder(Node *root){
    if(!root) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root){
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
void inOrder(Node *root){
    if(!root) return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
int main()
{
    Node *root =new Node(10);
    Node *a =new Node(20);
    Node *b =new Node(30);
    Node *c =new Node(40);
    Node *d =new Node(50);
    Node *e =new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = e;
    b->right = d;
    
    cout<<"Pre-order Traversal : ";
    preOrder(root);
    cout<<endl;

    cout<<"Post-order Traversal : ";
    postOrder(root);
    cout<<endl;

    cout<<"In-order Traversal : ";
    inOrder(root);
    return 0;
}