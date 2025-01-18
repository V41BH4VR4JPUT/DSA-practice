// list in stl (doubly linked list)

#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(0);
    for(auto x : l){
        cout << x << " ";
    }
    cout << endl;
    l.erase(l.begin());
    for(auto x : l){
        cout << x << " ";
    }
    cout << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << l.empty() << endl;
    cout << l.size() << endl;

    cout<<l.max_size()<<endl;

    
}