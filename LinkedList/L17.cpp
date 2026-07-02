// ✅ Linked List
// ✅ Merge Two Sorted Lists
// ✅ Dummy Node
// ✅ Two Pointers
// ✅ GFG - Merge Two Sorted Linked Lists





#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* sortedMerge(Node* head1, Node* head2)
    {
        Node* dummy = new Node(-1);
        Node* tail = dummy;

        while(head1 && head2)
        {
            if(head1->data <= head2->data)
            {
                tail->next = head1;
                head1 = head1->next;
            }
            else
            {
                tail->next = head2;
                head2 = head2->next;
            }

            tail = tail->next;
        }

        if(head1)
            tail->next = head1;
        else
            tail->next = head2;

        return dummy->next;
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
    Node* head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);

    Node* head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);

    Solution obj;

    Node* ans = obj.sortedMerge(head1, head2);

    printList(ans);

    return 0;
}