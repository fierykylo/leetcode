#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-words-containing-character/submissions/1990973073/?envType=problem-list-v2&envId=prshgx6i

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int> ans;
        for(int i = 0; i < words.size(); i++)
        {
            if(words[i].find(x) != string::npos)
            {
                ans.push_back(i);
            }

        } 
        return ans;  
    }
};