// Leetcode Ques34 : Find First and Last Position of Element in Sorted Array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int start = -1, end = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                start = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] == target)
            {
                end = i;
                break;
            }
        }
        return {start, end};
    }
};