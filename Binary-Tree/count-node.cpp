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
Node* input()
{
    int v; cin>>v;
    if(v == -1) return NULL;
    Node* root = new Node(v);

    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();
        int l,r; cin>>l>>r;
        Node *new_left = (l==-1? NULL : new Node(l));
        Node *new_right = (r==-1? NULL : new Node(r));
        f->left = new_left;
        f->right = new_right;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
void pre_order(Node *root){
    if(!root) return;
    cout<<root->val<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
int count_node(Node* root){
    if(!root) return 0;
    return count_node(root->left) + count_node(root->right) + 1;
}
int count_leaf_node(Node *root){
    if(!root) return 0;
    if(!root->left && !root->right) return 1;
    return count_leaf_node(root->left)+count_leaf_node(root->right);
}
int max_height(Node *root){
    if(!root) return 0;
    return max(max_height(root->left),max_height(root->right))+1;
}
int main()
{
    Node *root = input();
    cout<<"Number of Nodes : "<<count_node(root)<<endl;
    cout<<"Number of Leaf Nodes : "<<count_leaf_node(root)<<endl;
    cout<<"Maxmimum Height of Tree : "<<max_height(root)<<endl;
    pre_order(root);
    return 0;
}