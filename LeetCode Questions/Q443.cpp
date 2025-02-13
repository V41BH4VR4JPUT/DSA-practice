// leetcode 443 = string compression

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n == 1) return 1;
        int i = 0, j = 0;
        while (i < n) {
            int count = 0;
            char c = chars[i];
            while (i < n && chars[i] == c) {
                i++;
                count++;
            }
            chars[j++] = c;
            if (count > 1) {
                string s = to_string(count);
                for (char d : s) {
                    chars[j++] = d;
                }
            }
        }
        return j;
    }
};

