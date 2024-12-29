// question = Intersection of Two Sorted Arrays
// given two sorted arrays, return the intersection of the two arrays

#include<bits/stdc++.h>
using namespace std;

int IntersectionOfTwoSortedArray(int arr1[],int arr2[],int n,int m){
    int element;
    for(int i = 0; i < n; i++){
         element = arr1[i];
        for(int j = 0; j < m; i++){
         if(element == arr2[j]){
             cout<<element<<" ";
             arr2[j] = -1;
             break;
           }
       }
    }
    return element;
}  
int main(){
    int n;
    cout<<"Enter the size of the first array: ";
    cin>>n;
    int m;
    cout<<"Enter the size of the second array: ";
    cin>>m;

    int arr1[10];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"\nThe first array is: ";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int arr2[10];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<"\nThe second array is: ";
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int ans = IntersectionOfTwoSortedArray(arr1,arr2,n,m);
    cout<< "\nThe intersection of the two arrays is: "<<ans;

}