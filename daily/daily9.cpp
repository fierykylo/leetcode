#include <bits/stdc++.h>
using namespace std;

//17 feb 2026
//https://leetcode.com/problems/binary-watch/submissions/1922590822/?envType=daily-question&envId=2026-02-17

class Solution 
{
public:
    vector<string> readBinaryWatch(int turnedOn) 
    {
        vector<string> result;
        for (int HH = 0; HH <= 11; HH++)
        {
            for (int MM = 0; MM <= 59; MM++)
            {
                    if(__builtin_popcount(HH) + __builtin_popcount(MM) == turnedOn)
                    {
                        string hour = to_string(HH);
                        string minute = (MM < 10 ? "0" : "") + to_string(MM);
                        result.push_back(hour + ":" + minute);
                    }
            }
        }
        return result;
    }
};