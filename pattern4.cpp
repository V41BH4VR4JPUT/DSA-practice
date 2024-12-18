#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     //pattern 12
    //  int row = 1;
    //  while(row<=n){
    //     int col =1;
    //     while(col<=n){
    //         char ch = 'A' + row - 1;
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    //  }
     // pattern 13
    // int row = 1;
    //  while(row<=n){
    //     int col =1;
    //     while(col<=n){
    //         char ch = 'A' + col - 1;
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    //  }
     //pattern 14
    //  int row = 1;
    //  char value = 'A';
    //  while(row<=n){
    //     int col =1 ;
        
    //     while(col<=n){
    //         cout<<value<<" ";
    //         value++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    //  }
     // pattern 15
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}