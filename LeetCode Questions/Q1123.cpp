// Leetcode Ques 1123 : 
// Lowest Common Ancestor of Deepest Leaves

// Given the root of a binary tree, return the lowest common ancestor of its deepest leaves.
// A node is the lowest common ancestor of its deepest leaves if the node is in the deepest leaves' subtree, and every deepest leaf in the subtree has a different ancestor.

// Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
// Output: [2,6,14]



// Approach :
// 1. We will use a DFS approach to find the depth of each node and keep track of the deepest leaves.
// 2. We will then find the lowest common ancestor of the deepest leaves.
// 3. We will use a helper function to find the depth of each node and keep track of the deepest leaves.
// 4. We will then find the lowest common ancestor of the deepest leaves using a recursive function.    
// 5. We will return the lowest common ancestor of the deepest leaves.
// 6. We will use a helper function to find the depth of each node and keep track of the deepest leaves.


class Solution {
    public:
        pair<int, TreeNode*> helper(TreeNode* node) {
            if (!node) return {0, nullptr};
    
            auto left = helper(node->left);
            auto right = helper(node->right);
    
            if (left.first == right.first)
                return {left.first + 1, node};
            else if (left.first > right.first)
                return {left.first + 1, left.second};
            else
                return {right.first + 1, right.second};
        }
    
        TreeNode* lcaDeepestLeaves(TreeNode* root) {
            return helper(root).second;
        }
    };