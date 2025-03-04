// Leetcode ques11 : Container With Most Water

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxWater = 0;
    
        while (l < r) {
            // Calculate the area
            int width = r - l;
            int h = min(height[l], height[r]);
            int water = width * h;
    
            // Update maxWater
            maxWater = max(maxWater, water);
    
            // Move the pointer pointing to the smaller height
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
    
        return maxWater;
    
}