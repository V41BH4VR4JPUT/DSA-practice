// printing max and min value from the array

#include<bits/stdc++.h> 
using namespace std;
int printMin(int arr[], int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int printMax(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"The minimum value in the array is: "<<printMin(arr, size)<<endl;
    cout<<"The maximum value in the array is: "<<printMax(arr, size)<<endl;
    return 0;
}
