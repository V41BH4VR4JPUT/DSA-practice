//Given an array where every element appears twice except one, find the element that appears only once using bitwise operators.
#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int size) {
    int result = 0;
    for(int i = 0; i < size; i++){
        result = result ^ arr[i];
        
    }
    return result;
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int unique = findUnique(arr, size);
    cout<<"The unique element in the array is: "<<unique<<endl;

    return 0;
}