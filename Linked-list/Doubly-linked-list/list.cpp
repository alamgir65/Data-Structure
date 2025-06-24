#include<bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;

    list<int> myList2(5,7);

    // list<int> myList = {1, 2, 3, 4, 5};

    // list<int> myList(myList2);

    int arr[] = {1, 2, 3, 4, 5};
    // list<int> myList(arr, arr + sizeof(arr) / sizeof(arr[0]));

    vector<int> myVector = {100, 200, 300, 400, 500};
    list<int> myList(myVector.begin(),myVector.end());

    // cout << "Max size of myList: " << myList.max_size() << endl;
    // myList.clear();

    myList.push_back(10);
    myList.push_front(999);
    myList.push_back(10);
    // myList.remove(10);
    myList.insert(myList.begin(), 10000);
    myList.unique();
    myList.sort();
    cout << "Front element: " << myList.front() << endl;
    cout << "Back element: " << myList.back() << endl;
    
    if(myList.empty()) cout << "List is empty!" << endl;
    else cout << "List is not empty!" << endl;

    cout << "Size of myList: " << myList.size() << endl;
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << *it << " ";
    }
    return 0;
}