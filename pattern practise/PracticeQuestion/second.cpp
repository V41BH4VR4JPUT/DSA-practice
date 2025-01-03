/*
*
**
***
****
*****

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int rows = 0;
    while(rows<n){
        int cols = 0;
        while(cols<=rows){
            cout<<"*";
            cols++;
        }
        cout<<endl;
        rows++;
    }
    return 0;
}