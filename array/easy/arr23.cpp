#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/baseball-game/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int> record;

        for (auto it : operations)
        {
            if (it == "+")
            {
                int val = record.back() + record[record.size() - 2];
                record.push_back(val);
            }
            else if (it == "D")
            {
                int val = 2 * record.back();
                record.push_back(val);
            }
            else if (it == "C")
            {
                record.pop_back();
            }
            else
            {
                record.push_back(stoi(it));
            }
        }

        return accumulate(record.begin(), record.end(), 0);   
    }
};