#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/linked-list-cycle-ii/

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution 
{
public:
    ListNode *detectCycle(ListNode *head) 
    {
         ListNode *p = head;
        ListNode *q = head;

        while (q && q->next)
        {
            p = p->next;
            q = q->next->next;
            if (p == q)
            {
                ListNode * start = head;
                while(start != p)
                {
                    start = start->next;
                    p = p->next;
                }
                return start;
            }
        }
        return nullptr;
    }
};