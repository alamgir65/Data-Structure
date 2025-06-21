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
void reversePrintList(Node* tail){
    Node* tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int get_size(Node* head){
    int cnt = 0;
    while(head != NULL) cnt++, head = head->next;
    return cnt;
}
void insert_new_node(Node* &head,Node* &tail, int value){

    Node* newNode = new Node(value);
    Node* tmp = head;

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->next = NULL;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    int value;
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        cin >> value;
        if(value == -1) break;
        insert_new_node(head,tail,value);
    }

    printList(head);
    reversePrintList(tail);
    return 0;
}