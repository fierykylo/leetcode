#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& arr) {
        int ans = 0;
        int l = 0, r = arr.size() - 1;
        while (l < r) {
            ans = max(ans, (r - l) * min(arr[l], arr[r]));

            if (arr[l] < arr[r]) {
                l++;
            } else if (arr[l] > arr[r]) {
                r--;
            } else {
                l++;
                r--;
            }
        }
        return ans;
    }
};