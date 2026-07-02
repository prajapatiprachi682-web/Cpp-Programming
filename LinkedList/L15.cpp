// ✅ Linked List
// ✅ Dummy Node
// ✅ Pointer Manipulation
// ✅ Linked List Traversal
// ✅ LeetCode 203 - Remove Linked List Elements





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
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr)
        {
            if(curr->val == val)
            {
                prev->next = curr->next;
            }
            else
            {
                prev = curr;
            }

            curr = curr->next;
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
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    int val = 6;

    Solution obj;

    head = obj.removeElements(head, val);

    printList(head);

    return 0;
}