#include <bits/stdc++.h>
using namespace std;

//28th feb
//https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/?envType=daily-question&envId=2026-02-28

class Solution {
public:
    int m = 1e9 + 7;

    int concatenatedBinary(int n) {
        long result = 0;
        int digits = 0;

        for (int num = 1; num <= n; num++) {
            if ((num & (num - 1)) == 0) {
                digits++;
            }
            result = ((result << digits) % m + num) % m;
        }
        return result;
    }
};