#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/minimum-moves-to-make-array-complementary/?envType=daily-question&envId=2026-05-13

//13th may 2026


class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();

        vector<int> diff(2 * limit + 2, 0);

        for(int i = 0; i < n/2; i++) {

            int a = nums[i];
            int b = nums[n-1-i];

            int minVal = min(a, b) + 1;
            int maxVal = max(a, b) + limit;

            diff[2] += 2;
            diff[2*limit+1] -= 2;

            //1
            diff[minVal]   += (-1);
            diff[maxVal+1] -= (-1);

            //0
            diff[a+b]   += (-1);
            diff[a+b+1] -= (-1);
        }

        int result = INT_MAX;

        for(int sum = 2; sum <= 2*limit; sum++) {
            diff[sum] += diff[sum-1];

            result = min(result, diff[sum]);
        }
        //good one aarus san!!
        return result;
    }
};
