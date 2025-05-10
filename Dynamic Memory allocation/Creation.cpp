// creation of 2d array using dynamic memory allocation

#include<bits/stdc++.h>
using namespace std;

int main(){
    // creating a 2D array of size m*n
    int n ;
    cin >> n;

    int **arr = new int*[n]; // creating an array of pointers
    for(int i = 0; i < n; i++){
        arr[i] = new int[n]; // creating an array of size n for each pointer
    }

    // taking input for the 2D array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }cout<<endl;
    // printing the 2D array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }cout<<endl;
    }
    return 0;

}