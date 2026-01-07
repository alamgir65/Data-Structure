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

void level_order(Node *root){
    if(!root){
        cout<<"Tree empty\n";
        return;
    }
    
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();
        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    cout<<endl;
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
    
    cout<<"Level Order Traversing : ";
    level_order(root);
    return 0;
}