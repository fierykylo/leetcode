#include <bits/stdc++.h>
using namespace std;


//8th feb 2026
// first tree problem how cool is that using recursion as well mega cool 
//https://leetcode.com/problems/balanced-binary-tree/?envType=daily-question&envId=2026-02-08
/**
 * Definition for a binary tree node.
 */
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
    int height(TreeNode *root)
    {
        if (!root)
            return 0;
        int leftH = height(root->left);
        int rightH = height(root->right);

        return max(rightH, leftH) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;

        int leftH = height(root->left);
        int rightH = height(root->right);

        if (abs(leftH - rightH) > 1)
            return false;
        return (isBalanced(root->left) && isBalanced(root->right));
    }
};