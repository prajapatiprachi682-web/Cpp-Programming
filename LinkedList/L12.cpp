// ✅ Linked List
// ✅ Insertion Sort
// ✅ Dummy Node
// ✅ Pointer Manipulation
// ✅ LeetCode 147 - Insertion Sort List





#include <iostream>
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
    ListNode* insertionSortList(ListNode* head)
    {
        ListNode* dummy = new ListNode(0);

        while(head)
        {
            ListNode* curr = head;
            head = head->next;

            ListNode* prev = dummy;

            while(prev->next && prev->next->val < curr->val)
            {
                prev = prev->next;
            }

            curr->next = prev->next;
            prev->next = curr;
        }

        return dummy->next;
    }
};

void printList(ListNode* head)
{
    while(head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution obj;

    head = obj.insertionSortList(head);

    printList(head);

    return 0;
}