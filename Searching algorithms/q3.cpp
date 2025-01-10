// finding element in rotated sorted array
#include <bits/stdc++.h>
using namespace std;
int Pivot(int arr[] , int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]){
            ans = arr[mid];
        }
        if(arr[mid] > arr[mid + 1]){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int BinarySearch(int arr[], int n,int s,int e, int k){
    int start = s;
    int end = e;
    int mid = (start + end) / 2;// another approach to handle edge cases: mid = start + (end - start) / 2
    while(start <= end){
        if(arr[mid] == k){
            return true;
        }else if(arr[mid] < k){
            start = mid + 1;
        }else{
            end  = mid - 1;
        }
        mid = (start + end) / 2; // another approach to handle edge cases: mid = start + (end - start) / 2
    }
    return false;
}
int Findelement(int arr[] , int n , int pivot , int k){
    if(k > arr[pivot] && k < arr[n-1]){
        return BinarySearch(arr , n , pivot + 1 , n - 1 , k);
    }else if(k < arr[pivot] && k > arr[0]){
        return BinarySearch(arr , n , 0 , pivot - 1 , k);
    }
}
int main(){

    int arr[7] = {3, 4, 5, 6, 1, 2, 3};
    cout<<"the pivot index is: "<<Pivot(arr , 7)<<endl;
    int pivot = Pivot(arr , 7);
    
    cout<<"the element is: "<<Findelement(arr , 7 , pivot , 3);    
    
    return 0;
}