#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/check-if-the-sentence-is-pangram/submissions/1981269261/?envType=problem-list-v2&envId=prshgx6i
class Solution 
{
    public:
        bool checkIfPangram(string sentence) 
        {
            if (sentence.length() < 26) return false;
            map<int, int> check;
            for (auto it : sentence)
            {
                int val = it - 97;

                check[val]++;
            }
            
            for (int i = 0; i < 26; i++)
            {
                if(check[i] == 0)
                {
                    return false;
                }
            }
            return true;
        }
};