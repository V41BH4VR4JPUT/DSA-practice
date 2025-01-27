// Leetcode question 9
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int temp = x;
        int ans = 0;
        while (x > 0)
        {
            ans = (ans * 10) + (x % 10);
            x = x / 10;
        }
        if (ans == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};