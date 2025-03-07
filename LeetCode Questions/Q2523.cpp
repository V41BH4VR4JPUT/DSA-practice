// Leetcode Daily 2523. Closest Prime Numbers in Range
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> closestPrimes(int left, int right)
    {
        vector<bool> prime(right + 1, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i * i <= right; i++)
        {
            if (prime[i])
            {
                for (int j = i * i; j <= right; j += i)
                {
                    prime[j] = false;
                }
            }
        }
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            if (prime[i])
            {
                ans.push_back(i);
            }
        }
        if (ans.size() < 2)
        {
            return {-1, -1};
        }
        int diff = INT_MAX;
        int p1 = -1, p2 = -1;
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i + 1] - ans[i] < diff)
            {
                diff = ans[i + 1] - ans[i];
                p1 = ans[i];
                p2 = ans[i + 1];
            }
        }
        return {p1, p2};
    }
};