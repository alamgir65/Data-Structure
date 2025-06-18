#include<bits/stdc++.h>
using namespace std;

void fun(int* p){
    // p = NULL;
    
    cout << p << endl; // This will print NULL
}
int main()
{
    int val = 100;
    int* ptr = &val;
    fun(ptr);

    // cout << &ptr << endl;
    cout << val << endl;
    return 0;
}