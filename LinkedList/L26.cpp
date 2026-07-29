// ✅ Linked List
// ✅ Two Pointers
// ✅ Intersection of Linked Lists
// ✅ Pointer Switching Technique
// ✅ GFG / LeetCode 160 - Intersection of Two Linked Lists




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

    Node* intersectPoint(Node* head1, Node* head2)
    {
        Node* p1 = head1;
        Node* p2 = head2;

        while(p1 != p2)
        {
            p1 = (p1 == NULL) ? head2 : p1->next;
            p2 = (p2 == NULL) ? head1 : p2->next;
        }

        return p1;
    }
};

int main()
{
    Node* common = new Node(8);
    common->next = new Node(4);
    common->next->next = new Node(5);

    Node* head1 = new Node(4);
    head1->next = new Node(1);
    head1->next->next = common;

    Node* head2 = new Node(5);
    head2->next = new Node(6);
    head2->next->next = new Node(1);
    head2->next->next->next = common;

    Solution obj;

    Node* ans = obj.intersectPoint(head1, head2);

    if(ans)
        cout << ans->data;
    else
        cout << "NULL";

    return 0;
}