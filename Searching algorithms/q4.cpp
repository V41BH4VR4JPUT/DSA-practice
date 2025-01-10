// sqrt if number is not a perfect square
#include<bits/stdc++.h>
using namespace std;
 long long int binarysearch(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;

        long long int ans = 0;
        while(s <= e){
            long long int square = mid*mid;
            if(square == n){
                return mid;
            }
            if(square < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n , int precision , int tempsol){
    double factor = 1;
    double ans = tempsol;

    for(int i = 0 ; i < precision ; i++){
        factor = factor / 10;
        for(double j = ans ; j*j < n ; j = j + factor){
            ans = j;
        }
    }
    return ans;
}    
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int tempsol = binarysearch(n);
    cout << "The square root of " << n << " is: " << morePrecision(n , 3 , tempsol) << endl;
    return 0;

} 