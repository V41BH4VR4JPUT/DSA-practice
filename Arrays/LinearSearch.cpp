// linear search 
#include<bits/stdc++.h> 
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key to search: ";
    cin>>key;
    if(linearSearch(arr, size, key) == -1){
        cout<<"The key is not found in the array"<<endl;
    }
    else{
        cout<<"The key is found at index: "<<linearSearch(arr, size, key)<<endl;
    }

    return 0;
}