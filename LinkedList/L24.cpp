// ✅ Linked List
// ✅ Rotation
// ✅ Two Pointers
// ✅ Circular Linked List Concept
// ✅ GFG - Rotate a Linked List





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

    Node* rotate(Node* head, int k)
    {
        if(head == NULL || head->next == NULL)
            return head;

        int len = 1;
        Node* tail = head;

        while(tail->next)
        {
            tail = tail->next;
            len++;
        }

        k %= len;

        if(k == 0)
            return head;

        Node* curr = head;

        for(int i = 1; i < k; i++)
            curr = curr->next;

        Node* newHead = curr->next;

        curr->next = NULL;
        tail->next = head;

        return newHead;
    }
};

void print(Node* head)
{
    while(head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    Solution obj;

    head = obj.rotate(head, 2);

    print(head);

    return 0;
}