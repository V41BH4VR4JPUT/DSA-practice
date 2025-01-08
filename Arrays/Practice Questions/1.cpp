//Find the largest and smallest elements in an array.
#include <bits/stdc++.h>
using namespace std;
void findLargestandSmallest(int arr[], int size){
    int Largest = INT_MIN;
    int smallest = INT_MAX;
    
    for(int i = 0; i < size; i++){
        Largest = max(Largest, arr[i]);
        smallest = min(smallest, arr[i]);
    }
    cout<<"The largest and smallest elements are: "<<Largest<<" and "<<smallest<<endl;
}
int main(){

    int size;
    cout<<"ENTER THE SIZE OF THE ARRAY: ";
    cin>>size;
    int arr[size];

    for(int i = 0; i < size; i++){
        cin>>arr[i];    
    }
    findLargestandSmallest(arr, size);
    
    return 0;
}