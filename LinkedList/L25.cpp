// ✅ Linked List
// ✅ Node Deletion
// ✅ Pointer Manipulation
// ✅ Traversal
// ✅ GFG - Delete Node in a Linked List




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

    Node* deleteNode(Node* head, int x)
    {
        if(head == NULL)
            return NULL;

        if(x == 1)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* curr = head;

        for(int i = 1; i < x - 1 && curr != NULL; i++)
            curr = curr->next;

        if(curr == NULL || curr->next == NULL)
            return head;

        Node* temp = curr->next;

        curr->next = temp->next;

        delete temp;

        return head;
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Solution obj;

    head = obj.deleteNode(head, 3);

    print(head);

    return 0;
}