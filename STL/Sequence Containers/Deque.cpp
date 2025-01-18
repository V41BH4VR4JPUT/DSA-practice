// Deque in stl

#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d = {1,2,3,4,5};
    
    for(auto i : d){
        cout<<i<<" ";
    }
    cout<<"\nsize of deque is :"<<d.size()<<endl; 
    d.push_back(6);
    d.push_front(0);
    cout<<endl;
    for(auto i : d){
        cout<<i<<" ";
    }
    cout<<"\nsize of deque is :"<<d.size()<<endl;

    d.erase(d.begin() + 2 , d.begin() + 4);//erase the elements between index 2 and 4 (exclusive)

    for(auto i : d){
        cout<<i<<" ";
    }
    cout<<"\nsize of deque is :"<<d.size()<<endl;

    cout<<" \nfront element is : "<<d.front()<<endl;
    cout<<" \nback element is : "<<d.back()<<endl;
    cout<<" \nempty or not : "<<d.empty()<<endl;
    
}