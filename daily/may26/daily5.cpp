#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/rotate-list/submissions/1996072278/?envType=daily-question&envId=2026-05-05

// 5th may 2026

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
        {
            return head;
        }
        int len = 0;
        ListNode *tail = head;
        while (tail->next)
        {
            len++;
            tail = tail->next;
        }
        len++;
        k = k % len;
        if (k == 0)
            return head;
        tail->next = head;
        ListNode *newTail = head;
        int n = len - k - 1;
        for (int i = 0; i < n; i++)
        {
            newTail = newTail->next;
        }
        ListNode *newHead = newTail->next;
        newTail->next = NULL;
        return newHead;
    }
};