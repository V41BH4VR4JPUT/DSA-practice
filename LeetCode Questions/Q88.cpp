// Leetcode question 88
// Merge Sorted Array
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> ans ;
        if(m == 0){
            ans  = num2;
        }else if(n == 0){
            ans = nums1;
        }else{
            for(int i = 0 ; i < m ; i++){
                ans.push_back(nums1[i]);
            }
            for(int i = 0 ; i < n ; i++){
                ans.push_back(nums2[i]);
            }
            sort(ans.begin() , ans.end());
        }
        nums1 = ans;
    }