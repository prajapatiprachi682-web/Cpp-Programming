// ✅ Linked List
// ✅ Palindrome
// ✅ Reverse Linked List
// ✅ Two Pointers
// ✅ GFG - Maximum Length Palindrome in a Linked List





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

    int countCommon(Node* a, Node* b)
    {
        int cnt = 0;

        while(a && b)
        {
            if(a->data != b->data)
                break;

            cnt++;

            a = a->next;
            b = b->next;
        }

        return cnt;
    }

    int maxPalindrome(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;

        int ans = 0;

        while(curr)
        {
            Node *next = curr->next;

            curr->next = prev;

            ans = max(ans,
                      2 * countCommon(prev, next) + 1);

            ans = max(ans,
                      2 * countCommon(curr, next));

            prev = curr;
            curr = next;
        }

        return ans;
    }
};

int main()
{
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(7);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(2);

    Solution obj;

    cout << obj.maxPalindrome(head);

    return 0;
}