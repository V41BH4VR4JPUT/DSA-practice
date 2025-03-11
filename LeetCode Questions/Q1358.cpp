// Leetcode Ques 1358 - Number of Substrings Containing All Three Characters

class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt[3] = {0, 0, 0};
        int ans = 0;
        for (int i = 0, j = 0; i < s.size(); i++) {
            cnt[s[i] - 'a']++;
            while (cnt[0] && cnt[1] && cnt[2]) {
                ans += s.size() - i;
                cnt[s[j] - 'a']--;
                j++;
            }
        }
        return ans;
    }
};