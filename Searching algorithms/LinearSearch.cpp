// Linear Search Time Complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int index = linearSearch(arr, size, key);
    if (index == -1) {
        cout << "Key not found in the array." << endl;
    } else {
        cout << "Key found at index: " << index << endl;
    }
    return 0;
}