// leetcode ques daily Q763
// Partition Labels


#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        int n = s.length();
        vector<int> last(26, -1);
        for (int i = 0; i < n; i++) {
            last[s[i] - 'a'] = i;
        }
        int start = 0;
        int end = 0;
        for (int i = 0; i < n; i++) {
            end = max(end, last[s[i] - 'a']);
            if (i == end) {
                res.push_back(end - start + 1);
                start = end + 1;
            }
        }    
        return res;
    }
};