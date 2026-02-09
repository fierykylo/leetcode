#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */

 //9th feb 2026
 //idk pretty tough not good with trees
 //https://leetcode.com/problems/balance-a-binary-search-tree/?envType=daily-question&envId=2026-02-09
struct TreeNode {
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

    //inorder function

    void inorder(vector<int> &nums, TreeNode* root)
    {
        if (!root) return;
        inorder(nums, root->left);
        nums.push_back(root->val);// populating the nums
        inorder(nums, root->right);
    }

    TreeNode* construct(vector<int> &nums, int low, int high)
    {
        if (low > high) return NULL;

        int mid = low + (high - low) / 2;
        // new node creation 
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = construct(nums, low, mid - 1);
        root->right = construct(nums, mid + 1, high);

        return root;


    }
    TreeNode* balanceBST(TreeNode* root) 
    {
        vector<int> nums;

        inorder(nums, root);

        int low = 0;
        int high = nums.size() - 1;
        return construct(nums, low, high);

    }
};