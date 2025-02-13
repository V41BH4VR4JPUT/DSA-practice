// Linerar search in 2D array

#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[][4], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cin >> key;
    if(linearSearch(arr, 3, 4, key) == 0){
        cout << "Element not found" << endl;
    }else{
        cout << "Element found" << endl;
    }
    
}