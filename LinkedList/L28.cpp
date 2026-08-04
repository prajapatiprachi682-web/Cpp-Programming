// ✅ Linked List
// ✅ Pointer Manipulation
// ✅ Dummy Node
// ✅ Swap Nodes in Pairs
// ✅ LeetCode 24 - Swap Nodes in Pairs




#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode* next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution {
public:

    ListNode* swapPairs(ListNode* head)
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        while(prev->next && prev->next->next)
        {
            ListNode* first = prev->next;
            ListNode* second = first->next;

            first->next = second->next;
            second->next = first;
            prev->next = second;

            prev = first;
        }

        return dummy.next;
    }
};

void print(ListNode* head)
{
    while(head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    Solution obj;

    head = obj.swapPairs(head);

    print(head);

    return 0;
}