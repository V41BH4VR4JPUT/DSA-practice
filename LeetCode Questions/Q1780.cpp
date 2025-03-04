// Leetcode daily Q1780

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool CheckPowersOfThree(int n){
        // check if number is a sum of powers of three
       while(n > 0){
        int remainder = n % 3;
        if(remainder == 2){
            return false;
        }
        n /= 3;
       }
       return true;
    }
};