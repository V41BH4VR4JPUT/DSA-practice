#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin >> n;

        bool isPrime = true;
        for(int i = 2; i<n; i++){
            if(n%i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            cout << "Prime";
        }else{
            cout << "Not Prime";
        }

        
        
        return 0;
    }