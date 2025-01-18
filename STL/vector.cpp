// vectors in stl

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr(5 , 1);
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<" \npushing element at the back "<<endl;
    arr.push_back(5);
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<" \npushing element at the back "<<endl;
    arr.push_back(6);
     for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<" \npopping element from back "<<endl;
    arr.pop_back();
     for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<" \npopping element from back "<<endl;
    arr.pop_back();
     for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<" \nindex at 4 "<<arr.at(4)<<endl;
    cout<<" \nfirst element "<<arr.front()<<endl;
    cout<<" \nlast element "<<arr.back()<<endl;
    cout<<" \nempty or not "<<arr.empty()<<endl;
    cout<<" \nsize "<<arr.size()<<endl;
    cout<<" \ncapacity "<<arr.capacity()<<endl;

    vector<int> sec(arr);
    for(auto i : sec){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it;
    for(it = arr.begin(); it != arr.end(); it++){
        cout<<*it<<" ";
    }
}