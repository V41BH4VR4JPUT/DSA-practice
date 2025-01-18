// map and unordered map int stl

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int , string> m;
    m.insert({1 , "scorpio"});
    m.insert({2 , "verna"});
    m.insert({3 , "BMW"});
    m.insert({4 , "audi"});

    for(auto it : m){
        cout<<it.first<<" -> "<<it.second<<endl;
    }cout<<endl;
    cout<<"The size of the map is: "<<m.size()<<endl;
    cout<<"The max size of the map is: "<<m.max_size()<<endl;
    cout<<"The empty or not: "<<m.empty()<<endl;
    cout<<"The element at index 2 is: "<<m.at(2)<<endl;
    cout<<"The element at index 2 is: "<<m[2]<<endl;
    cout<<" finding the element: "<<m.count(2)<<endl;

    map<int , string> :: iterator itr = m.find(2);//find the element 2 in the map m and return its iterator
    
    if(itr == m.end()){
        cout<<"element not found"<<endl;
    }else{
        cout<<"element found"<<endl;
    }

    for(auto itr = m.begin(); itr != m.end(); itr++){
        cout<<itr->first<<" -> "<<itr->second<<endl;
    }cout<<endl;

    map<int , string> :: iterator it = m.begin();
    it++;
    m.erase(it);//erase the element at the iterator itr

    for(auto itr = m.begin(); itr != m.end(); itr++){
        cout<<itr->first<<" -> "<<itr->second<<endl;        
    }

    unordered_map<int , string> um;//unordered map is a map that does not preserve the order of the elements
    um.insert({1 , "scorpio"});
    um.insert({2 , "verna"});
    um.insert({3 , "BMW"});
    um.insert({4 , "audi"});
    cout<<endl;
    for(auto it : um){
        cout<<it.first<<" -> "<<it.second<<endl;
    }cout<<endl;
}