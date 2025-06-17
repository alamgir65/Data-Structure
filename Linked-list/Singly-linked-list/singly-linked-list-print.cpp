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
    Node* third = new Node(400);
    Node* fourth = new Node(500);

    head->next = first;
    first->next = second;
    second->next = third;   
    third->next = fourth;

    Node* current = head;
    while(current->next != NULL){
        cout << current->val << " ";
        current = current->next;
    }

    return 0;
}