// Binary Search Time Complexity : O(logn)
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int n, int k){
    int start = 0;
    int end = n - 1;
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
int main(){
    int even[6] = {2 , 4 , 6, 8 , 10 , 12};
    int odd[5] = {1 , 3 , 5 , 7 , 9};
    int k = 8;
    cout<<BinarySearch(even , 6 , 8)<<endl;
    cout<<BinarySearch(odd , 5 , 8);
    return 0;
}