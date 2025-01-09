// find the first and last occurrence of an element in a sorted array
#include <bits/stdc++.h>
using namespace std;
int firstOccurrence(int arr[] , int n , int target){
    int start = 0;
    int end = n - 1;
    int mid = start + (end- start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if(arr[mid] < target){
            start = mid + 1;

        }else{
            end  = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccurrence(int arr[] , int n , int target){
    int start = 0;
    int end = n - 1;
    int mid = start + (end- start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid] < target){
            start = mid + 1;

        }else{
            end  = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int arr[6] = {0 , 1 , 1 , 1 ,2 , 3};
    int target = 1;
    
    cout<<"the first occurrence at index is: "<<firstOccurrence(arr , 6 , target)<<endl;
    cout<<"the last occurrence at index is: "<<lastOccurrence(arr , 6 , target);
}