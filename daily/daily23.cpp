#include <bits/stdc++.h>
using namespace std;

//5th march 2026
//https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/?envType=daily-question&envId=2026-03-05

class Solution {
public:
    int minOperations(string s) {
            int op1 = 0, op2 = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != (i % 2 ? '1' : '0')) 
                op1++;

            if (s[i] != (i % 2 ? '0' : '1')) 
                op2++;
        }

        return min(op1, op2);
    }
};