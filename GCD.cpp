// GCD Greatest common divisor
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    while( a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout<< "the two numbers are a : "<<a<<" and b : "<<b<<endl;
    int result = GCD(a,b);
    cout<<"The Greatest common divisor of a and b: "<<result<<endl;
    return 0;
}