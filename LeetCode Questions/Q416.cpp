// Leetcode ques `416 : Partition Equal Subset Sum`

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        if(sum % 2 != 0) return false; // If sum is odd, we cannot partition it into two equal subsets
        int target = sum / 2;
        int n = nums.size();
        bool dp[n + 1][target + 1];
        for(int i = 0; i <= n; i++){
            dp[i][0] = true; // 0 sum can always be formed with 0 elements
        }
        for(int i = 1; i <= target; i++){
            dp[0][i] = false; // Non-zero sum cannot be formed with 0 elements
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= target; j++){
                if(nums[i - 1] <= j){
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][target]; // Return the result for the full array and target sum
    }
};