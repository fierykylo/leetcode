#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    int size(ListNode* head)
    {
        int size = 0;
        while(head)
        {
            size++;
            head = head->next;
        }
        return size;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int length = size(head);
        if (length == n)
        {
            return head->next;
        }
        int position = length - n;
        ListNode *p = head;
        for (int i = 0; i < position - 1; i++)
        {
            p = p->next;
        }
        p->next = p->next->next;
        return head;

    }
};