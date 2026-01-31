#include <bits/stdc++.h>
using namespace std;
// this is a very easy question just came in similar questions 

// few things that i realised are first 
// the for char c : s is faster because optimisation is easy 
// array or vector is the best solution because hashing slows you down 
// instead of using 97 use 'a' as it makes the code fasster 

//https://leetcode.com/problems/first-unique-character-in-a-string/?envType=problem-list-v2&envId=counting
class Solution {
public:
    int firstUniqChar(string s) 
    {
        int arr[26] = {0};
        int n = s.size();
        int ascii;
        for (char ch : s)
        {
            ascii = ch - 'a';
            arr[ascii]++;   
        }
        for (int i = 0; i < n; i++)
        {
            ascii = s[i] - 'a';
            if (arr[ascii] == 1)
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