///Delete Nodes with Greater on Right
#include <iostream>
using namespace std;

// Node structure
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
            Node* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    Node* compute(Node* head)
    {
        head = reverse(head);

        int maxi = head->data;

        Node* curr = head;

        while(curr && curr->next)
        {
            if(curr->next->data < maxi)
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr = curr->next;
                maxi = curr->data;
            }
        }

        return reverse(head);
    }
};

// Print Linked List
void printList(Node* head)
{
    while(head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // 12 -> 15 -> 10 -> 11 -> 5 -> 6 -> 2 -> 3

    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(10);
    head->next->next->next = new Node(11);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next->next = new Node(3);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.compute(head);

    cout << "Modified List: ";
    printList(head);

    return 0;
}