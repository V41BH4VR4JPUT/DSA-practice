// write a program to swap alternate element on array.

#include<bits/stdc++.h>
using namespace std;

void SwapAlternate(int arr[], int size){
    int n = size;
    for(int i = 0; i < n; i+=2){
        if((i + 1) < n){
            swap(arr[i] , arr[i + 1]);
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size ;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[10];
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    
     SwapAlternate(arr , size);
     
    return 0;
}