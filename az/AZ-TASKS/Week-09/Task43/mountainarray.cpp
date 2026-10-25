#include <bits/stdc++.h>
using namespace std;

// leetcode 1095 Find in mountain Array - https://leetcode.com/problems/find-in-mountain-array/description/

 class MountainArray {
   public:
     int get(int index);
    int length();
 };


class Solution {
public:
    bool check(MountainArray &arr, int mid, int n)
    {
        if(mid == (n - 1)) return true;
        int val1 = arr.get(mid);
        int val2 = arr.get(mid + 1);
        if(val1 > val2) return true;
        return false;
    }
    int bs(MountainArray &arr, int lo, int hi, int target, bool asc)
    {
        int ans = -1;
        while(lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            int val = arr.get(mid);
            if(val == target)
            {
                ans = mid;
                return ans;
            }
            else if((val < target) == asc)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return ans;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
        int n = mountainArr.length();
        //finding the peak
        int lo = 0, hi = n - 1;
        int ans = 0;
        while(lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if(check(mountainArr, mid, n))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        int val1 = bs(mountainArr, 0, ans, target, true);
        if(val1 != -1) return val1;
        return bs(mountainArr, ans + 1, n - 1, target, false);


    }
};