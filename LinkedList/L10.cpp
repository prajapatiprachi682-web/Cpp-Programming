// Delete Middle Node of Linked List (LeetCode 2095)



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

class Solution
{
public:
    ListNode* deleteMiddle(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;

        delete slow;

        return head;
    }
};

void printList(ListNode* head)
{
    while(head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next = new ListNode(6);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.deleteMiddle(head);

    cout << "After Deleting Middle Node: ";
    printList(head);

    return 0;
}