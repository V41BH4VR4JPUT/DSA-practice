// leetcode ques 67 : Add binary

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.size() - 1;
        int j = b.size() - 1;
        string ans = "";
        int carry = 0;
        while (i >= 0 || j >= 0 || carry)
        {
            if (i >= 0)
            {
                carry += a[i] - '0';
                i--;
            }
            if (j >= 0)
            {
                carry += b[j] - '0';
                j--;
            }
            ans += to_string(carry % 2);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
