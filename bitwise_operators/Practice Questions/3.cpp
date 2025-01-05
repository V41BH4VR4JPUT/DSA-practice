// Implement a function to check if two integers have opposite signs using bitwise operators.
#include<bits/stdc++.h> 
using namespace std;
bool oppositeSign(int a, int b){
    return ((a^b)<0); 
}
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<oppositeSign(a ,b);

    return 0;
}