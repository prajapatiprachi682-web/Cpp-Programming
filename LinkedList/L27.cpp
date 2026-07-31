// ✅ Linked List
// ✅ Floyd's Cycle Detection (Tortoise & Hare)
// ✅ Loop Detection
// ✅ Cycle Length
// ✅ GFG - Find Length of Loop in Linked List




#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:

    int lengthOfLoop(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                int cnt = 1;
                fast = fast->next;

                while(fast != slow)
                {
                    cnt++;
                    fast = fast->next;
                }

                return cnt;
            }
        }

        return 0;
    }
};

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head->next->next->next->next->next = head->next->next;

    Solution obj;

    cout << obj.lengthOfLoop(head);

    return 0;
}