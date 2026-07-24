// ✅ Linked List
// ✅ Floyd's Cycle Detection Algorithm
// ✅ Fast & Slow Pointer
// ✅ Cycle Detection
// ✅ GFG - Detect Loop in Linked List





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

    bool detectLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }
};

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Creating loop
    head->next->next->next->next = head->next;

    Solution obj;

    cout << obj.detectLoop(head);

    return 0;
}