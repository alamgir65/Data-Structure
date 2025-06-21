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
int get_size(Node* head){
    int cnt = 0;
    while(head != NULL) cnt++, head = head->next;
    return cnt;
}
void insert_new_node(Node* &head,Node* &tail, int position, int value){

    if(position < 0 || position > get_size(head)+1){
        cout << "Invalid position!" << endl;
        return;
    }
    
    
    Node* newNode = new Node(value);
    Node* tmp = head;
    int n = get_size(head);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    if(position == n+1){
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        return;
    }

    for(int i = 1; i < position-1 ; i++){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
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


    int position,value; 
    cin >> position >> value;

    insert_new_node(head,tail,position,value);

    printList(head);
    reversePrintList(tail);
    // cout << head->val << " " << head->prev << " " << head->next << endl;

}