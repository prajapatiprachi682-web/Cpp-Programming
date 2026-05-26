// #include<iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;

//     ListNode(int data) {
//         val = data;
//         next = NULL;
//     }
// };

// class Solution {
// public:

//     ListNode* reverseList(ListNode* head) {

//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         while(curr != NULL)
//         {
//             ListNode* nextNode = curr->next;

//             curr->next = prev;

//             prev = curr;

//             curr = nextNode;
//         }

//         return prev;
//     }
// };

// void printList(ListNode* head)
// {
//     while(head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main()
// {
//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);

//     Solution obj;

//     ListNode* ans = obj.reverseList(head);

//     printList(ans);

//     return 0;
// }








#include<iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int data) {
        val = data;
        next = NULL;
    }
};

class Solution {
public:

    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL)
        {
            next = curr->next;

            curr->next = prev;

            prev = curr;

            curr = next;
        }

        return prev;
    }
};

void printList(ListNode* head)
{
    while(head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);

    Solution obj;

    ListNode* ans = obj.reverseList(head);

    printList(ans);

    return 0;
}