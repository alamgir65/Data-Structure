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
void insert_new_node(Node* &head,int value){
    Node* newNode = new Node(value);
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
void printList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void reverseList(Node* &head,Node* tmp){

    if(tmp->next == NULL){
        head = tmp;
        head->next = NULL;
        return;
    }
    reverseList(head,tmp->next);

    tmp->next->next = tmp;
    tmp->next = NULL;

}
int main()
{
    int value;
    Node* head = NULL;
    while(true){
        cin>> value;
        if(value == -1) break;
        insert_new_node(head, value);
    }
    reverseList(head, head);
    printList(head);
    return 0;
}