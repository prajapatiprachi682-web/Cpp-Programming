#include<iostream>
#include<cmath>
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

    // Reverse Linked List
    ListNode* reverseLL(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL)
        {
            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;

            curr = nextNode;
        }

        return prev;
    }

    // Convert Binary Linked List to Decimal
    int getDecimalValue(ListNode* head) {

        // Reverse Linked List
        head = reverseLL(head);

        int result = 0;
        int power = 0;

        while(head != NULL)
        {
            if(head->val == 1)
            {
                result += pow(2, power);
            }

            power++;

            head = head->next;
        }

        return result;
    }
};

int main()
{
    // Create Linked List
    // 1 -> 0 -> 1

    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);

    Solution obj;

    int ans = obj.getDecimalValue(head);

    cout << "Decimal Value = " << ans;

    return 0;
}