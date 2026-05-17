#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/

class Solution {
public:

    vector<int> smallestRange(vector<vector<int>>& nums) 
    {
        //lemme precompute this haha
        vector<pair<int, int>> arr;//pairs
        //insert row and pairs
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums[i].size(); j++)
            {
                arr.push_back({nums[i][j], i});
            }
        }
        sort(arr.begin(), arr.end());

        int total = arr.size();
        vector<int> ans(2);
        int ansval = INT_MAX;
        int tail = 0, head = -1;
        int n = nums.size();
        vector<int> freq(n, 0);
        int dist = 0;
        int k = n - 1;

        while(tail < total)
        {
            //eat
            while(head + 1 < total && (dist < k || freq[arr[head + 1].second] > 0))
            {
                head++;
                if(freq[arr[head].second] == 0)dist++;
                freq[arr[head].second]++;
            }
            if(head + 1 < total)
            {
                int mini = arr[tail].first;
                int maxi = arr[head + 1].first;
                if((maxi - mini) < ansval)
                {
                    ans[0] = mini;
                    ans[1] = maxi;
                    ansval = maxi - mini;
                }
                
            }
            if(tail <= head)
            {
                freq[arr[tail].second]--;
                if(freq[arr[tail].second] == 0) dist--;
                tail++;
            }
            else
            {
                tail++;
                head = tail - 1;
            }
        }
        return ans;
        
    }
};