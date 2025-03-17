// Leetcode Ques 2206 : Divide Array Into Equal Pairs

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it : nums){
            cout<<it<<" ";
            mp[it]++;
        }
        for(auto it : mp){
            cout<<it.first<<" "<<it.second<<endl;
            if(it.second % 2 != 0) return false;
        }
        return true;
    }
};

