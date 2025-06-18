#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;

    Node(int value){
        this->val = value;
        this->next = NULL;
    }
};
int main()
{
    Node* head = new Node(100);
    Node* first = new Node(200);
    Node* second = new Node(300);

    head->next = first;
    first->next = second;

    cout<<"Enter position & value : ";
    int val,pos; cin>>pos>>val;

    Node* newNode = new Node(val);

    Node* current = head;
    
    for(int i = 1; i <= pos-2; i++){
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    current = head;
    while(current != NULL){
        cout << current->val <<" ";
        current = current->next;
    }
    
    return 0;
}