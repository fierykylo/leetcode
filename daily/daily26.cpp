#include <bits/stdc++.h>
using namespace std;

//5th april 2026
//https://leetcode.com/problems/robot-return-to-origin/?envType=daily-question&envId=2026-04-05

class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int dx = 0;
        int dy = 0;
        for (auto ch : moves)
        {
            if(ch == 'U'){
                dx += 1;
            }
            else if (ch == 'D')
            {
                dx -= 1;
            }
            else if (ch == 'L')
            {
                dy += 1;
            }
            else{
                dy -= 1;
            }
        }
        return (dx == 0 && dy == 0);
    
    }
};