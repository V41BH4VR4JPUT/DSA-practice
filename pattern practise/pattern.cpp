#include<bits/stdc++.h>
using namespace std;

int main(){
    int n  ;
    cin>>n;
    // pattern 1
    // int i =1;
     
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
        
        
    // }
    // pattern 2
    // int i =0;
     
    // while(i<n){
    //     int j = 0;
    //     while(j<n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
        
        
    // }
    // pattern 3
    int i =1;
     
    while(i<=n){
        int j = i;
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
        
    }
    return 0;
}