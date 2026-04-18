#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/design-linked-list/submissions/1948979237/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x = 0, ListNode* next = nullptr) : val(x), next(next) {}
};

class MyLinkedList {
public:
    ListNode* dummy;   // sentinel node before the real list
    int sz;            // size of the linked list

    MyLinkedList() {
        dummy = new ListNode(); // dummy node
        sz = 0;
    }

    int get(int index) {
        if (index < 0 || index >= sz) return -1;

        ListNode* p = dummy->next;
        for (int i = 0; i < index; i++)
            p = p->next;

        return p->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(sz, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > sz) return;

        ListNode* prev = dummy;

        for (int i = 0; i < index; i++)
            prev = prev->next;

        ListNode* node = new ListNode(val);
        node->next = prev->next;
        prev->next = node;

        sz++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= sz) return;

        ListNode* prev = dummy;

        for (int i = 0; i < index; i++)
            prev = prev->next;

        ListNode* temp = prev->next;
        prev->next = temp->next;
        delete temp;

        sz--;
    }
};

/**
 * Usage by LeetCode:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */