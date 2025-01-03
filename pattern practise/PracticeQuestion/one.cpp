// practice questions 
/*
1
22
333
4444
55555
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    int i = 0 ;
    while(i<n){
        int j = 0;
        while(j<=i){
            cout<<i+1;
            j++;
        }
        cout<<endl;
        i++;
      

    }

    return 0;
}