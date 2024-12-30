// sorting an array of 0s and 1s
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void SortedArray(int arr[] , int n){
    int left = 0;
    int right = n-1;
    
    while(left <= right){
        
        while(arr[left] == 0){
            left++;
        }
        while(arr[right] == 1){
            right--;
        }
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }
}
int main(){
    int arr[5] = {0,1,0,1,1};
    printArray(arr , 5);
    SortedArray(arr , 5);
    printArray(arr , 5);
     return 0;
}