#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/valid-anagram/submissions/1915131813/
// string easy

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        vector<int> string1(26, 0);
        vector<int> string2(26, 0);

        for (auto c : s)
        {
            int value = c - 'a';
            string1[value]++;
        }
        for (auto c : t)
        {
            int value = c - 'a';
            string2[value]++;
        }

        for (int i = 0; i < 25; i++)
        {
            if (string1[i] != string2[i])
            {
                return false;
            }
        }
        return true;

    }
};

int main(void)
{
    Solution s1;
    cout << s1.isAnagram("bus", "sub");
    cout << s1.isAnagram("hey", "hi");

    

}