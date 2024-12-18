#include<bits/stdc++.h>
using namespace std;
int main(){
    //pattern 16
    /* 
    A
    B B
    C C C
    */
    // int n;
    // cin>>n;
    // int row = 1;
    // while(row<=n){
    //     int col = 1;
    //     while(col<=row){
    //         char ch = 'A' + row - 1;
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    //pattern 17
    /* 
    A
    A B
    A B C
    
    */
    // row = 1;
    // while(row<=n){
    //     int col = 1;
    //     char value = 'A';
    //     while(col<=row){
            
    //         cout<<value<<" ";
    //         value++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    //pattern 18
    /*
    A
    B C
    D E F
    */
//    int n;
//    cin>>n;
//    int row = 1;
//    char value = 'A';
//    while(row<=n){
//     int col = 1;
//     while(col<=row){
        
//         cout<<value<<" ";
//         value++;
//         col++;
//     }
//     cout<<endl;
//     row++;
//    }

//pattern 19
/* 
A
B C
C D E
D E F G
*/

int n;
cin>>n;
int row = 1;
while(row<=n){
    int col = 1;
    while(col<=row){
        char ch = 'A' + row + col - 2;
        cout<<ch<<" ";
        col++;
    }
    cout<<endl;
    row++;
}
    return 0;
}