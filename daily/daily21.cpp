#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems//?envType=daily-question&envId=2026-03-01
//1st march

class Solution {
public:
    int minPartitions(string n) {
        char maxch = *max_element(begin(n), end(n));
        return maxch - '0';
    }
};