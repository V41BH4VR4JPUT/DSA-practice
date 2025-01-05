// write a function to represent a binary representation of a number

#include<bits/stdc++.h>
using namespace std;
void BinaryRepresentation(int n){
    int i = 0;
    while(n > 0){
        int bit = n & 1;
        if(bit == 1){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        n = n >> 1;
        i++;
    }
    
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    
    BinaryRepresentation(n);
    return 0;
}    