#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int value){
        this->val = value;
        this->next = NULL;
        this->prev = NULL;
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
void insert(Node* &head,Node* &tail, int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverse(Node* &head,Node* &tail){
    Node* tmp1 = head, * tmp2 = tail;
    
    while(tmp1 != tmp2 && tmp1->next != tmp2){
        swap(tmp1->val, tmp2->val);
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    while(true){
        cin >> value;
        if(value == -1) break;
        insert(head, tail, value);
    }
    reverse(head, tail);
    printList(head);
    return 0;
}