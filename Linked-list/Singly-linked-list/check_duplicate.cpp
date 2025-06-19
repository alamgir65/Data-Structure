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
int size_of_list(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        tmp = tmp->next;
        count++;
    }
    return count;
}
bool check_duplicate(Node* head,int n){
    bool flag=false;

    for(Node* i = head; i->next != NULL; i = i->next){
        // cout << i->val <<" next loop ";
        for(Node* j=i->next; j != NULL; j=j->next){
            // cout << j->val << " ";
            if(i->val == j->val) flag=true;
        }
        // cout<<endl;
    }
    return flag;
}
void print_middle_element(Node* head,int n){
    int half = n/2;
    Node* tmp = head;
    for(int i=1; i<half; i++){
        tmp = tmp->next;
    }
    if(n==1){
        cout << tmp->val << endl;
    }
    else if(n%2){
        cout << tmp->next->val << endl;
    }else{
        cout << tmp->val <<" "<<tmp->next->val<<endl;
    }
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
    int n=size_of_list(head);

    cout << "Size : "<<n<<endl;

    if(check_duplicate(head,n)) cout << "Yes, this linked list has duplicate values\n";
    else cout <<"NO\n";

    print_middle_element(head,n);
    return 0;
}