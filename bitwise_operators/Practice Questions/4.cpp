//Write a program to find the number of set bits (1s) in the binary representation of a number.
#include<bits/stdc++.h>
using namespace std;
int CoutingSetBits(int n){
    int count  = 0;
    
    while(n != 0){
        int bit = n & 1;
        if(bit == 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    cout<<CoutingSetBits(n);
    
}