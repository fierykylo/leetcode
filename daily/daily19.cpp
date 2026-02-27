#include <bits/stdc++.h>
using namespace std;

//27th feb my birthday be better next year
//https://leetcode.com/problems/water-bottles/?envType=daily-question&envId=2026-02-27

class Solution 
{
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
        return numBottles + (numBottles  - 1) / (numExchange - 1);
    }
};