// Leetcode ques54 : Spiral Matrix

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row * col;

        int starting_row = 0;
        int starting_col = 0;
        int Last_row = row - 1;
        int last_col = col - 1;

        while(count < total){
            for(int index = starting_col; count < total && index<=last_col; index++){
                ans.push_back(matrix[starting_row][index]);
                count++;
            }
            starting_row++;

            for(int index = starting_row; count < total && index<=Last_row; index++){
                ams.push_back(matrix[index][last_col]);
                count++;
            }
            last_col--;

            for(int index = last_col; count < total && index>=starting_col; index--){
                ans.push_back(matrix[Last_row][index]);
                count++;
            }
            Last_row--;

            for(int index = Last_row; count < total && index>=starting_row; index--){
                ans.push_back(matrix[index][starting_col]);
                count++;
            }
            starting_col++;    
        }
        return ans;
    }
};