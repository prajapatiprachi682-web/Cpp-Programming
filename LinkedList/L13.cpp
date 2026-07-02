// ✅ Linked List
// ✅ Partition Linked List
// ✅ Dummy Nodes
// ✅ Pointer Manipulation
// ✅ LeetCode 86 - Partition List
// ✅ Interview Favourite Linked List Problem




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
    ListNode* partition(ListNode* head, int x)
    {
        ListNode* smallDummy = new ListNode(0);
        ListNode* largeDummy = new ListNode(0);

        ListNode* small = smallDummy;
        ListNode* large = largeDummy;

        while(head)
        {
            if(head->val < x)
            {
                small->next = head;
                small = small->next;
            }
            else
            {
                large->next = head;
                large = large->next;
            }

            head = head->next;
        }

        large->next = NULL;
        small->next = largeDummy->next;

        return smallDummy->next;
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
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);

    int x = 3;

    Solution obj;

    head = obj.partition(head, x);

    printList(head);

    return 0;
}