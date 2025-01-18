// arrays in Stl

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int , 5> arr = {1,2,3,4,5};
    int size = arr.size();

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<arr.at(4)<<" element at the index of 4 "<<endl;
    cout<<arr.front()<<" first element "<<endl;
    cout<<arr.back()<<" last element "<<endl;
    cout<<arr.empty()<<" empty or not "<<endl;

}