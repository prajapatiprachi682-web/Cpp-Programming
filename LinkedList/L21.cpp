// ✅ Linked List
// ✅ Reverse Linked List
// ✅ Simulation
// ✅ Carry Handling
// ✅ GFG - Add Two Numbers Represented by Linked Lists





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

    Node* removeLeadingZeros(Node* head)
    {
        while(head && head->data == 0 && head->next)
            head = head->next;

        return head;
    }

    Node* addTwoLists(Node* head1, Node* head2)
    {
        head1 = removeLeadingZeros(head1);
        head2 = removeLeadingZeros(head2);

        head1 = reverse(head1);
        head2 = reverse(head2);

        int carry = 0;

        Node* dummy = new Node(0);
        Node* tail = dummy;

        while(head1 || head2 || carry)
        {
            int sum = carry;

            if(head1)
            {
                sum += head1->data;
                head1 = head1->next;
            }

            if(head2)
            {
                sum += head2->data;
                head2 = head2->next;
            }

            carry = sum / 10;

            tail->next = new Node(sum % 10);
            tail = tail->next;
        }

        Node* ans = reverse(dummy->next);

        return removeLeadingZeros(ans);
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
    Node* head1 = new Node(4);
    head1->next = new Node(5);

    Node* head2 = new Node(3);
    head2->next = new Node(4);
    head2->next->next = new Node(5);

    Solution obj;

    Node* ans = obj.addTwoLists(head1, head2);

    print(ans);

    return 0;
}