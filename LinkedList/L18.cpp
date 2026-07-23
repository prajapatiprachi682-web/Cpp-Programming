// ✅ Linked List
// ✅ Two Pointers
// ✅ Fast & Slow Pointer
// ✅ GFG - Kth Node from End of Linked List






#include <iostream>
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

    int getKthFromLast(Node *head, int k)
    {
        Node* slow = head;
        Node* fast = head;

        while(k--)
        {
            if(fast == NULL)
                return -1;

            fast = fast->next;
        }

        while(fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
    }
};

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Solution obj;

    cout << obj.getKthFromLast(head, 2);

    return 0;
}