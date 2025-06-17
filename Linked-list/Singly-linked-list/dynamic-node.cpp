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

    head->next = first;

    cout << "Value of head: " << head->val << endl;
    cout << "Value of first: " << first->val << " " << head->next->val << " " << (*(*head).next).val << endl;

    return 0;
}