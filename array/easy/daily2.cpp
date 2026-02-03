#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/trionic-array-i/submissions/1907245446/?envType=daily-question&envId=2026-02-03

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;
        
        int p = 0;
        while (p < n-2 && nums[p] < nums[p+1]) ++p;  // Phase 1
        if (p == 0) return false;
        
        int q = p;
        while (q < n-1 && nums[q] > nums[q+1]) ++q;  // Phase 2
        if (q == p || q == n-1) return false;
        
        while (q < n-1 && nums[q] < nums[q+1]) ++q;  // Phase 3
        return q == n-1;
    }
};

int main(void)
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution s1;
    cout << s1.isTrionic(nums);
}