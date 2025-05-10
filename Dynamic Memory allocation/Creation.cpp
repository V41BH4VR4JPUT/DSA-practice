// creation of 2d array using dynamic memory allocation

#include<bits/stdc++.h>
using namespace std;

int main(){
    // creating a 2D array of size m*n
    int rows, cols;
    cin >> rows >> cols;

    int **arr = new int*[rows]; // creating an array of pointers
    for(int i = 0; i < rows; i++){
        arr[i] = new int[cols]; // creating an array of size n for each pointer
    }

    // taking input for the 2D array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }cout<<endl;
    // printing the 2D array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
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