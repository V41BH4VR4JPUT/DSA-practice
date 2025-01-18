// set and unordered_set in stl

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(4);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    set<int> :: iterator it = s.find(3);//find the element 3 in the set s and return its iterator
    
    if(it == s.end()){
        cout<<"element not found"<<endl;
    }else{
        cout<<"element found"<<endl;
    }

    for(auto itr = it; itr != s.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    set<int> :: iterator itr = s.begin();
    itr++;
    s.erase(itr);//erase the element at the iterator itr
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;


    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);
    us.insert(3);
    us.insert(3);

    for(auto it = us.begin(); it != us.end(); it++){
        cout<<*it<<" ";
    }
}
