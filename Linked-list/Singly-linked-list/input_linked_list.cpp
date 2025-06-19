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
void insert_value(Node* &head, int value){
    Node* newNode  = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_list(Node* head){
    Node* tmp = head;
    cout << "Linked List: ";
    int count = 0;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
        count++;
    }
    cout << endl;
    cout << "Total Nodes: " << count << endl;
}
int main()
{
    
    int val;
    Node* head = NULL;

    while(true){
        cin>>val;
        if(val == -1) break;
        insert_value(head,val);
    }
    print_list(head);
    return 0;
}