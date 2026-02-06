#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/delete-node-in-a-linked-list/
//lmfao medium problem but easy as hell

/**
 * Definition for singly-linked list.
 * 
 */
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution 
{
public:
    void deleteNode(ListNode* node) 
    {
        node->val = node->next->val;
        node->next = node->next->next;   
    }
};