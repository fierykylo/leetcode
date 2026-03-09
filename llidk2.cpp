#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/


 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
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
    ListNode* deleteMiddle(ListNode* head) 
    {
        int length = size(head);
        int middle = length / 2;
        ListNode * p = head;
         if (!head || !head->next)
            return NULL;

        for (int i = 0; i < middle - 1; i++)
        {
            p = p->next;
        }
        p->next = p->next->next;
        return head;
    }
};