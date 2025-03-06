// Leetcode Ques 2965 : Find missing and repeated values in an array

class Solution
{
public:
    int n = grid.size();
    int nSquared = n * n;
    vector<int> count(nSquared + 1, 0);
    int repeated = -1;
    int missing = -1;

    
    for (const auto &row : grid)
    {
        for (int num : row)
        {
            count[num]++;
        }
    }

    
    for (int i = 1; i <= nSquared; ++i)
    {
        if (count[i] == 2)
        {
            repeated = i;
        }
        else if (count[i] == 0)
        {
            missing = i;
        }
    }

    return {repeated, missing};
};