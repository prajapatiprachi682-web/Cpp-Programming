// Remove Duplicate element from sorted list



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
    Node* removeDuplicates(Node* head)
    {
        Node* curr = head;

        while(curr != NULL && curr->next != NULL)
        {
            if(curr->data == curr->next->data)
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr = curr->next;
            }
        }

        return head;
    }
};

// Print Linked List
void printList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    // Sorted Linked List:
    // 1 -> 1 -> 2 -> 3 -> 3 -> 4 -> 4 -> 5

    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printList(head);

    Solution obj;
    head = obj.removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}