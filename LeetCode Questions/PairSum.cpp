// given an array in a number is given 
// we have to find the pair of numbers whose sum is equal to the given number
// optimised solution of the problem

vector<vector<int>> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        for(int i = 0 ; i < nums.size() ; i++){ 
            for(int j = i + 1; j < nums.size() ; j++){
                vector<int> temp;
                if(nums[i] + nums[j] == target){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    ans.push_back(temp);
                }
            
            }
            return ans;
        }
    }
