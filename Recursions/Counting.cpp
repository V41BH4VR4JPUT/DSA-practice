// Counting 
#include<bits/stdc++.h>
using namespace std;

void counting(int n){
    if (n == 0) return;  // Base case

    cout<< n << " ";  // Print the current number
    counting(n - 1);  // Recursive call with n-1
    cout<<endl;
    cout<< n << " ";  // Print the current number again after the recursive call
}
int main(){
    int n;
    cin>>n;
    counting(n);
    return 0;
}