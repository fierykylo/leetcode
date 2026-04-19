#include <bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/description/?envType=daily-question&envId=2026-04-19

//19th april 2026

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) 
    {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;
        int result = 0;
        while (i < m && j < n)
        {
            if(nums1[i] > nums2[j])
            {
                i++;
            }
            else
            {
                result = max(result, j - i);
                j++;
            }
        }
        return result;
    }
};