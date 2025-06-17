#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    // Constructor to initialize the Node with a value
    Node(int value){
        this->val = value;
        this->next = NULL; // Initialize next pointer to NULL
    }
};

int main()
{
    Node a(100);
    Node b(200);

    a.next = &b;

    cout<< "Value of a: " << a.val << endl;
    
    // Accessing the value of b through the next pointer of a
    cout<< "Value of b: " << b.val <<" "<< (*a.next).val << " "<< a.next->val<< endl;
    return 0;
}