// Detect Cycle in LL - 1



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
    bool hasCycle(ListNode *head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    // Create nodes
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Create cycle: 4 -> 2
    fourth->next = second;

    Solution obj;

    if(obj.hasCycle(head))
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "No Cycle Found" << endl;
    }

    return 0;
}