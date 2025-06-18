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

    int pos; cin>>pos;

    Node* current = head;
    Node* deleteNode;
    
    for(int i = 1; i<=pos-2; i++){
        current = current->next;
    }
    deleteNode = current->next;
    current->next = current->next->next;
    delete deleteNode;

    current = head;

    while(current != NULL){
        cout << current->val <<" ";
        current = current->next;
    }
    
    return 0;
}