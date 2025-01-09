// find pivot in an array
#include <bits/stdc++.h>
using namespace std;
int Pivot(int arr[] , int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]){
            ans = mid;
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
int main(){

    int arr[7] = {3, 4, 5, 6, 1, 2, 3};
    cout<<"the pivot index is: "<<Pivot(arr , 7);
    return 0;
}