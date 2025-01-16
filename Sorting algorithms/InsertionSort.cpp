// Insertion sort

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i<n-1 ; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);

    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    cout<<"\nBefore sorting"<<endl;
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout<<"\nAfter sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}    