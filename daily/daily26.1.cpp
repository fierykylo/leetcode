#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/furthest-point-from-origin/

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) 
    {
        int dist1 = 0;
        int dist2 = 0;

        for (auto ch : moves)
        {
            if (ch == 'L')
            {
               dist1 -= 1;
               dist2 -= 1; 
            }
            else if (ch == 'R')
            {
                dist1 += 1;
                dist2 += 1;
            }
            else
            {
                dist1 -= 1; //moves left
                dist2 += 1; // moves right
            }
        }
        dist1 = abs(dist1);
        dist2 = abs(dist2);
        return max(dist1, dist2);
    }
};