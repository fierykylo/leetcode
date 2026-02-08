#include <bits/stdc++.h>
using namespace std;

// two pointer approach
// stimulation greedy
// leetcode medium but ts is easy and its more of a quest problem so i just put it here
// anyways marked as a stack since we are stimulating a stack
//https://leetcode.com/problems/build-an-array-with-stack-operations/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string> operations;
        int j = 0;
        int size = target.size();
        for (int i = 0; i < n, j < size; i++)
        {
            if ((i + 1) == target[j])
            {
                operations.push_back("Push");
                j++;
            }
            else if ((i + 1) != target[j])
            {
                operations.push_back("Push");
                operations.push_back("Pop");
            }
        }
        return operations;


    }
};