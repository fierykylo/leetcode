#include <bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/submissions/1974802457/?envType=daily-question&envId=2026-04-10

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, vector<int>> mp; // number -> indices

        int result = INT_MAX; // distance

        for (int k = 0; k < n; k++) {
            mp[nums[k]].push_back(k);

            if (mp[nums[k]].size() >= 3) {
                vector<int>& vec = mp[nums[k]];
                int sz = vec.size();

                int i = vec[sz - 3]; // third last occurrence

                result = min(result, 2 * (k - i));
            }
        }

        return result == INT_MAX ? -1 : result;
    }
};