// ✅ Linked List
// ✅ Floyd's Cycle Detection Algorithm
// ✅ Fast & Slow Pointer
// ✅ Loop Removal
// ✅ GFG - Remove Loop in Linked List





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

class Solution {
public:

    void removeLoop(Node* head)
    {
        if(head == NULL || head->next == NULL)
            return;

        Node* slow = head;
        Node* fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                break;
        }

        if(fast == NULL || fast->next == NULL)
            return;

        if(slow == head)
        {
            while(fast->next != head)
                fast = fast->next;

            fast->next = NULL;
            return;
        }

        slow = head;

        while(slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = NULL;
    }
};

void printList(Node* head)
{
    while(head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head->next->next->next->next->next = head->next->next;

    Solution obj;
    obj.removeLoop(head);

    printList(head);

    return 0;
}