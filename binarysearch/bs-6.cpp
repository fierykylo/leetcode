#include <bits/stdc++.h>
using namespace std;
//https://www.youtube.com/watch?v=nhEMDKMB44g&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=50
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int high = nums.size() - 1;
        int low = 0;
        int mid;

        while (low < high)
        {
            mid = (low + high) / 2;

            if (nums[mid] > nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
       return nums[low];
    }
};