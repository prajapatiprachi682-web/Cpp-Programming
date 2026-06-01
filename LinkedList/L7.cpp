// Remove nth node from end of linked list



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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int length = 0;
        ListNode* temp = head;

        while(temp)
        {
            length++;
            temp = temp->next;
        }

        int pos = length - n;

        // Delete first node
        if(pos == 0)
        {
            return head->next;
        }

        temp = head;

        for(int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};

// Print Linked List
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
    // 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2;

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.removeNthFromEnd(head, n);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}