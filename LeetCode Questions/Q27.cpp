// Leetcode q27 : Remove element 

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        for(const int num : nums){
            if(num != val){
                nums[i++] = num;
            }
        }
        return i;
    }
};
