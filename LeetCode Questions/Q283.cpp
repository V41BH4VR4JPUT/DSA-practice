// Leetcode Question 283
#include<bits1/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    vector<int> temp;
    int count = 0;
    for(auto i : nums){
        if(i != 0){
            temp.push_back(i);
        }
        else(i == 0){
            count = count + 1;
        }
        
    }
    for(int i = 0 ; i < count ; i++){
        temp.push_back(0);
    }
    nums = temp;
    for(auto i : nums){
        cout << i << " ";
    }
}