// Leetcode ques 368 : Largest Divisible Subset

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> dp(n,1);
        vector<int> hash(n);
        int maxans=1;
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                        hash[i]=j;
                    }
                }
            }
        }
        int index=0;
        for(int i=0;i<n;i++){
            if(dp[i]>maxans){
                maxans=dp[i];
                index=i;
            }
        }
        vector<int> ans;
        while(hash[index]!=index){
            ans.push_back(nums[index]);
            index=hash[index];
        }
        ans.push_back(nums[index]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};



