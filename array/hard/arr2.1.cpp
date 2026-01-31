#include <bits/stdc++.h>
using namespace std;
// this is a very easy question just came in similar questions 

class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map <char, int> mp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

int main(void)
{
    string s;
    cin >> s;
    Solution s1;
    cout << s1.firstUniqChar(s);
}