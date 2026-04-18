#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/remove-linked-list-elements/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x = 0, ListNode* next = nullptr) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        if (head = nullptr)
        {
            return head;
        }
        while(head && head->val == val)
        {
            head = head->next;
        }
        ListNode *p = head;
        while (p && p->next)
        {
            if(p->next->val == val)
            {
                p->next = p->next->next;
            }
            else
            {
                p = p->next;
            }
        }
        return head;
    }
};