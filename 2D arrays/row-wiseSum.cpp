// printing row wise sum in 2d array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"The elements in the array are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The row wise sum is: "<<endl;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}