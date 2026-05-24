#include <iostream>
using namespace std;

// Node structure
class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Function to find length of linked list
int length(Node *head)
{
    int count = 0;

    Node* temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    // Creating linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Function call
    int ans = length(head);

    cout << "Length of Linked List = " << ans << endl;

    return 0;
}