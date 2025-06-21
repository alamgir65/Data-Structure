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
void delete_any_position(Node* &head,Node* &tail, int position){

     if(position < 1 || position > get_size(head)){
            cout << "Invalid position!" << endl;
            return;
     }
    
    Node* deleteNode;
    
     if(position == 1){
        deleteNode = head;
        head = head->next;
        if(head != NULL) head->prev = NULL;
        delete deleteNode;
        return;
     }

     if(position == get_size(head)){
        deleteNode = tail;
        tail = tail->prev;
        if(tail != NULL) tail->next = NULL;
        delete deleteNode;
        return;
     }

    Node* tmp = head;

    for(int i = 1; i < position; i++){
        tmp = tmp->next;
    }

    deleteNode = tmp;
    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    delete deleteNode;
}
int main()
{
    Node* head =new Node(100);
    Node* first = new Node(200);
    Node* second = new Node(300);
    Node* third = new Node(400);
    Node* fourth = new Node(500);
    Node* tail = new Node(600);

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

    int position;
    cin >> position;

    printList(head);
    reversePrintList(tail);

    delete_any_position(head,tail,position);

    printList(head);
    reversePrintList(tail);
    // cout << head->val << " " << head->prev << " " << head->next << endl;

}