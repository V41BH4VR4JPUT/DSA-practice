// Priority queue in stl

#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> q;
    // max heap first element is the greatest element
    priority_queue<int , vector<int> , greater<int>> pq;
    // min heap first element is the smallest element

    q.push(1);
    q.push(2);
    q.push(3);  
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }cout<<endl;
    cout<<q.size()<<endl;

    pq.push(1);
    pq.push(2);
    pq.push(3);  
    cout<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;
    cout<<pq.size()<<endl;
}