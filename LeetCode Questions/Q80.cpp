// Leetcode question 80
// Problem: Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int count = 1; // Count of current number
        int index = 1; // Index to place the next unique number

        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count = 1; // Reset count for a new number
            }

            if (count <= 2) {
                nums[index++] = nums[i]; // Place the number in the new position
            }
        }

        return index; // New length of the array
    }
};