// print the sum of all elements in the array

#include<bits/stdc++.h> 
using namespace std;    
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    cout<<sum<<endl;
}