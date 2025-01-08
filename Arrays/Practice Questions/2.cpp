//Implement a function to reverse an array in place.
#include <bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int size){
    int arr2[size];
    for(int i = 0, j = size -1; i<size && j >=0; i++, j--){
        arr2[i] = arr[j];
    }
    for(int i = 0; i < size; i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Reversed array is: ";
    ReverseArray(arr, size);
    
    return 0;
}