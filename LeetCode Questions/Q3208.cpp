// Leetcode Ques 3208 : Alternating Groups II

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int numberOfAlternatingGroups(vector<int>& colors, int k){
        colors.insert(colors.end(), colors.begin(), colors.begin() + (k - 1));
        int count = 0;
        int left = 0;
        
        for (int right = 0; right < colors.size(); ++right) {
            if (right > 0 && colors[right] == colors[right - 1]) {
                left = right;  
            }
            
            if (right - left + 1 >= k) {
                count++;  
            }
        }
        
        return count;
        }
};