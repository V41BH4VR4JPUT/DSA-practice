#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n;
        cin>>n;
        //pattern 8
    // int row = 1;
    // while(row<=n){
    //     int col =1 ;
    //     while(col<=row){
    //         cout<<row;
    //         col++;

    //     }
    //     cout<<endl;
    //     row++;
    // }

    //pattern 9
    //  int row = 1;
    //  int count = 1;
    // while(row<=n){
    //     int col =1 ;
    //     while(col<=row){
    //         cout<<count;
    //         count++;
    //         col++;

    //     }
    //     cout<<endl;
    //     row++;
    // }

    // pattern 10
//  int row = 1;
     
//     while(row<=n){
//         int col =1 , count = row;
//         while(col<=row){
//             cout<<count;
//             count++;
//             col++;

//         }
//         cout<<endl;
//         row++;
//     }
// patern 11
     int row = 1;
     while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row -col +1;
            col++;
        }
        cout<<endl;
        row++;
     }
        return 0;
    }