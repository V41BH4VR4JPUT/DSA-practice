//Write a program to find the second largest element in an array
#include <bits/stdc++.h>
using namespace std;
void SecondLargest(int arr[] , int n){
    int ans = 0 ;
    int SecondLargest = INT_MIN;
    for(int i = 0; i < n; i++){
        ans = max(ans , arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > SecondLargest && arr[i] != ans){
            SecondLargest = arr[i];
        }
    }
    cout<<SecondLargest;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    SecondLargest(arr , n);
    return 0;
}