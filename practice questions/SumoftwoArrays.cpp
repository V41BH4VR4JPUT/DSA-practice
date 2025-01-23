// Sum of two arrays 
/*
 arr1 = [1,2,3,4,5]
 arr2 = [5,6,7,8,9]
    sum = 1 2 3 4 5
        + 5 6 7 8 9
        -----------
          6 9 1 3 4
ans  = [6,9,1,3,4]

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int sum = 0;
    int carry = 0;
    int i = n1-1;
    int j = n2-1;
    while(i>=0 && j>=0){
        sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        cout<<sum<<endl;
        i--;
        j--;
    }
    while(i>=0){
        sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        cout<<sum<<endl;
        i--;
    }
    while(j>=0){
        sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        cout<<sum<<endl;
        j--;
    }
    if(carry!=0){
        cout<<carry<<endl;
    }
    
    return 0;
}