#include<bits/stdc++.h>
using namespace std;

// Node is a user-defined data type for storing a value and a pointer to the next node.
class Node
{
    public:
        int val;
        Node* next;
};

int main()
{
    Node a,b; // Create two Node objects a and b , that is like a normal variable declaration.

    a.val = 100;
    b.val = 200; 

    a.next = &b; // Set the next pointer of node a to point to node b.
    b.next = NULL;

    cout<< "Value of a: " << a.val << endl;
    
    // Accessing the value of b through the next pointer of a
    cout<< "Value of b: " << b.val <<" "<< (*a.next).val << " "<< a.next->val<< endl;
    return 0;
}