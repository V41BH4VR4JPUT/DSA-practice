// reversing an array


#include<bits/stdc++.h> 
using namespace std;

void reverseArray(int arr[] , int size) {
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[] , int size) {
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr1[5] = {1 , 3 , 5 , 7 , 9};
    int arr2[5] = {2 , 4 , 6 , 8 , 10};
    cout<<"before reversing"<<endl;
    printArray(arr1 , 5);
    printArray(arr2 , 5);
    
    reverseArray(arr1 , 5);
    reverseArray(arr2 , 5);
    
    cout<<"after reversing"<<endl;
    printArray(arr1 , 5);
    printArray(arr2 , 5);
    return 0;
}
