#include<bits/stdc++.h>
using namespace std;
int main(){
    // Normal Code Time Complexity : O(logn)
    // int n ;
    // cout<<"Enter the Binary Number : ";
    // cin>>n;

    // int sum = 0;
    // int i = 0;

    // while(n > 0){
    //     int bit = n%10;
    //     sum = (bit * pow(2 , i)) + sum;
    //     n = n / 10;
    //     i++; 
    // }

    // cout<<"Decimal Number is : "<<sum<<endl;

    // optimized code Time Complexity : 0(n)

    int m;
    cout<<"Enter the Binary Number : ";
    cin>>m;

    int sum = 0;
    int powerOF2 = 1;

    while(m > 0){
        int bit = m%10;
        sum = (bit * powerOF2) + sum;
        powerOF2 = powerOF2 * 2; 
        m = m / 10;
    }

    cout<<"Decimal Number is : "<<sum<<endl;

    return 0;
}