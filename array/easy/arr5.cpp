#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/add-digits/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return (num % 9 == 0) ? 9 : num % 9;
    }
};