#include <bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/middle-of-the-linked-list/
 
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution 
{
    int size(ListNode* p)
    {
        int len = 0;
        while(p)
        {
            len++;
            p = p->next;
        }
        return len;
    }
public:
    ListNode* middleNode(ListNode* head) 
    {
           int length = size(head);
           int middle = length / 2;
           for (int i = 0; i < middle; i++)
           {
                head = head->next;
           }
           return head;
    }
};