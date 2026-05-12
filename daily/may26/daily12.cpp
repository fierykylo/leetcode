#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/?envType=daily-question&envId=2026-05-12

//12th may 2026

class Solution {
public:
    
    static bool cmp(vector<int>& a, vector<int>& b) {
        return (a[1] - a[0]) > (b[1] - b[0]);
    }
    
    int minimumEffort(vector<vector<int>>& tasks) {
        
        sort(tasks.begin(), tasks.end(), cmp);
        
        int energy = 0;
        int ans = 0;
        
        for(auto &task : tasks) {
            
            int actual = task[0];
            int minimum = task[1];
            
            
            if(energy < minimum) {
                ans += (minimum - energy);
                energy = minimum;
            }
            
            
            energy -= actual;
        }
        
        return ans;
    }
};