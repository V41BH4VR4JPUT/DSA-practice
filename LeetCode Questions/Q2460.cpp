//Leetcode Ques 2460 : Apply Operations to an Array
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i + 1]){
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
        }
        vector<int> ans2 ((n-ans.size()), 0);
        ans.insert(ans.end(), ans2.begin(), ans2.end());
        return ans;
    }
};