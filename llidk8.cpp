#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        int n = 0;
        while(head)
        {
            n = n << 1;
            n = (n | head->val);
            head = head->next;
        }
        return n;
    }
};