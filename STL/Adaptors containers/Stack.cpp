// Stack in Stl
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;
    s.push("boy");
    s.push("up");
    s.push("shut");

    stack<string> temp = s;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop(); 
    }cout<<endl;
    
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<endl;
}