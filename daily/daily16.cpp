#include <bits/stdc++.h>
using namespace std;

// 24th feb 2026
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/?envType=daily-question&envId=2026-02-24

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int solve(TreeNode *root, int val)
    {
        if (!root)
        {
            return 0;
        }
        val = (2 * val) + root->val;
        if (root->left == NULL && root->right == NULL)
        {
            return val;
        }
        return solve(root->left, val) + solve(root->right, val);
    }
    int sumRootToLeaf(TreeNode *root)
    {
        return solve(root, 0);
    }
};