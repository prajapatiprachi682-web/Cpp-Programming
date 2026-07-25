// ✅ Linked List
// ✅ Reverse Linked List
// ✅ Simulation
// ✅ Carry Handling
// ✅ GFG - Add 1 to a Number Represented as Linked List





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

    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;

        while(curr)
        {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    Node* addOne(Node* head)
    {
        head = reverse(head);

        Node* curr = head;
        int carry = 1;

        while(curr && carry)
        {
            int sum = curr->data + carry;

            curr->data = sum % 10;
            carry = sum / 10;

            if(carry && curr->next == NULL)
                curr->next = new Node(0);

            curr = curr->next;
        }

        return reverse(head);
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
    head->next->next = new Node(9);

    Solution obj;

    head = obj.addOne(head);

    print(head);

    return 0;
}