#include<bits/stdc++.h>
using namespace std;
int main(){
    int n  ;
    cin>>n;
    int i =1;
     // pattern 4
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 5
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
            
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // pattern 6
    // int count = 1;

    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 7
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}