#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/1951416752/
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
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (!head || !(head->next)) return head;
        ListNode *fast = head;
        for (int i = 1; i < k; i++)
        {
            fast = fast->next;
        }
        ListNode *first = fast;
        ListNode *slow = head;
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        swap(first->val, slow->val);
        return head;
    }
};