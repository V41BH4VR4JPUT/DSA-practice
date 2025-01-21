// reversing an array
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int n){
    vector<int> temp;
    for(int i = n-1 ; i >= 0 ; i--){
        temp.push_back(arr[i]);
    }
    arr = temp;
    for(auto i : arr){
        cout << i << " ";
    }
}
int main(){

    vector<int> arr = {1 , 3, 2 , 4 , 5};
    int n = arr.size();
    reverseArray(arr , n);
    return 0;
}