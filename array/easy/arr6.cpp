#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int words =0;
        int maxi = 0;
        for (auto sentence : sentences)
        { 
            words = 0;
            for (auto word : sentence)
            {
                if (word ==  ' ')
                {
                    words ++;
                }
            }
            words += 1;
            maxi = max(words, maxi);
        }
        return maxi;   
    }
};