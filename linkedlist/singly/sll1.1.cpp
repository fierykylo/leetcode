#include <bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
//https://leetcode.com/problems/add-two-numbers/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry = 0;
        int sum = 0;
        ListNode *head = nullptr;
        ListNode *tail = head;
        while(l1 || l2 || carry)
        {
            int x = (l1 ? l1->val : 0);
            int y = (l2 ? l2->val : 0);
            sum = x + y + carry;

            if(l1)
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
            carry = sum / 10;
            if (head == nullptr)
            {
                ListNode *t = new ListNode((sum % 10), nullptr);
                tail = head = t;
            }
            else 
            {
                ListNode *t = new ListNode((sum % 10), nullptr);
                tail->next = t;
                tail = t;
            }
        }
        return head;
    }
};

