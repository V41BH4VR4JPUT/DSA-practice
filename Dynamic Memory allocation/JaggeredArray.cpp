// Creating a jaggered array using dynamic memory allocation

#include<bits/stdc++.h>
using namespace std;

int main(){
    // creating a jaggered array of size m*n
    int rows;
    cin >> rows;

    int **arr = new int*[rows]; // creating an array of pointers
    for(int i = 0; i < rows; i++){
        int cols;
        cin >> cols;
        arr[i] = new int[cols]; // creating an array of size n for each pointer
    }

    // taking input for the jaggered array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < sizeof(arr[i])/sizeof(arr[i][0]); j++){
            cin >> arr[i][j];
        }
    }cout<<endl;
    // printing the jaggered array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < sizeof(arr[i])/sizeof(arr[i][0]); j++){
            cout << arr[i][j] << " ";
        }cout<<endl;
    }
    // deallocating the memory
    for(int i = 0; i < rows; i++){
        delete[] arr[i]; // deleting the array of size n for each pointer
    }
    delete[] arr; // deleting the array of pointers
    return 0;
}