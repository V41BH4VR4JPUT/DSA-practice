//Write a function to check if a given number is a power of 2.
#include<bits/stdc++.h>
using namespace std;
bool ChecksPowerOf2(int n){
    for(int i = 0; i < 31; i++){
        int ans = pow(2 , i);
        if(ans == n){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<ChecksPowerOf2(n);
}