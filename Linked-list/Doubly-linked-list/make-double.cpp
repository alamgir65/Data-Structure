#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node* next;
    Node(int value){
        this->val = value;
        this->prev = NULL;
        this->next = NULL;
    }

};
void printList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reversePrintList(Node* tail){
    Node* tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node* head =new Node(100);
    Node* first = new Node(200);
    Node* second = new Node(300);
    Node* third = new Node(400);
    Node* fourth = new Node(500);
    Node* tail = new Node(500);

    head->next = first;
    first->prev = head;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = tail;
    tail->prev = fourth;

    printList(head);
    reversePrintList(tail);
    // cout << head->val << " " << head->prev << " " << head->next << endl;

}