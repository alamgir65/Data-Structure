#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int value){
        this->val = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
    int val; cin>>val;
    if(val == -1){
        return NULL;
    }

    Node* root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l,r; cin>>l>>r;
        Node *myLeft,*myRight;
        myLeft = (l == -1 ? NULL : new Node(l));
        myRight = (r == -1 ? NULL : new Node(r));

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
void preOrder(Node *root){
    if(!root) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    Node *root = input_tree();
    preOrder(root);
    return 0;
}