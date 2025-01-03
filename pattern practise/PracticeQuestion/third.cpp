/*
1
2 3
4 5 6
7 8 9 10
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int rows = 1;
    int count = 1;
    while(rows<=n){
        int cols = 1;
        while(cols<=rows){
            cout<<count<<" ";
            count++;
            cols++;
        }
        cout<<endl;
        rows++;
    }
    return 0;

}