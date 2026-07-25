// ✅ Linked List
// ✅ Merge Sort
// ✅ Divide and Conquer
// ✅ Fast & Slow Pointer
// ✅ Coding Ninjas / GFG - Merge Sort for Linked List





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

Node* merge(Node* left, Node* right)
{
    if(left == NULL)
        return right;

    if(right == NULL)
        return left;

    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while(left && right)
    {
        if(left->data <= right->data)
        {
            tail->next = left;
            left = left->next;
        }
        else
        {
            tail->next = right;
            right = right->next;
        }

        tail = tail->next;
    }

    if(left)
        tail->next = left;
    else
        tail->next = right;

    return dummy->next;
}

Node* getMid(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* mergeSort(Node* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    Node* mid = getMid(head);

    Node* left = head;
    Node* right = mid->next;

    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

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
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    head = mergeSort(head);

    print(head);

    return 0;
}