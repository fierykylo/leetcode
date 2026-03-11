 #include <bits/stdc++.h>
 using namespace std;
 //https://leetcode.com/problems/merge-two-sorted-lists/
 
 
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* head = new ListNode();
        ListNode* last = head;
        while (list1 && list2)
        {
            
            ListNode *t = new ListNode();
            if (head == NULL)
            {
                last = head = t;
            }
            if (list1->val < list2->val)
            {
                t->val = list1->val;
                list1 = list1->next;
            }
            else
            {
                t->val = list2->val;
                list2 = list2->next;   
            }
            last->next = t;
            last = t;
        }
        while (list1)
        {
            ListNode *t = new ListNode();
            last->next = t;
            last = t;
            t->val = list1->val;
            list1 = list1->next;
        }
         while (list2)
        {
            ListNode *t = new ListNode();
            last->next = t;
            last = t;
            t->val = list2->val;
            list2 = list2->next;
        }
        return head->next;
           
    }
};