//write a function to swap two numbers without using third variable.
#include<bits/stdc++.h>
using namespace std;
void swap(int a, int b){
    //first approach
    // a = a^b;
    // b = a^b;
    // a = a^b;
    // second approach
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"the value of numbers after swapping are a: "<<a<<" and b: "<<b<<endl;
}
int main(){
    int a ;
    cout<<"Enter the value of a: ";
    cin>>a;
    int b;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"the value of numbers before swapping are a: "<<a<<" and b: "<<b<<endl;

    swap(a,b);
    return 0;
}