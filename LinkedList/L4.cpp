// LL is Palindrome.



// #include<iostream>
// #include<vector>
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

//     bool isPalindrome(ListNode* head) {

//         vector<int> arr;

//         // Store linked list into array
//         while(head != NULL)
//         {
//             arr.push_back(head->val);
//             head = head->next;
//         }

//         int left = 0;
//         int right = arr.size() - 1;

//         // Check palindrome
//         while(left < right)
//         {
//             if(arr[left] != arr[right])
//             {
//                 return false;
//             }

//             left++;
//             right--;
//         }

//         return true;
//     }
// };

// int main()
// {
//     // Create Linked List
//     // 1 -> 2 -> 2 -> 1

//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(2);
//     head->next->next->next = new ListNode(1);

//     Solution obj;

//     bool ans = obj.isPalindrome(head);

//     if(ans)
//     {
//         cout << "Palindrome";
//     }
//     else
//     {
//         cout << "Not Palindrome";
//     }

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

    // Find Middle Node
    ListNode* midd(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // Reverse Linked List
    ListNode* reversedd(ListNode* head) {

        ListNode* curr = head;
        ListNode* forward = NULL;
        ListNode* prev = NULL;

        while(curr != NULL)
        {
            forward = curr->next;

            curr->next = prev;

            prev = curr;

            curr = forward;
        }

        return prev;
    }

    // Check Palindrome
    bool isPalindrome(ListNode* head) {

        if(head == NULL || head->next == NULL)
        {
            return true;
        }

        // Find middle
        ListNode* mide = midd(head);

        // Reverse second half
        ListNode* revers = reversedd(mide);

        // Compare both halves
        while(revers != NULL)
        {
            if(head->val != revers->val)
            {
                return false;
            }

            head = head->next;
            revers = revers->next;
        }

        return true;
    }
};

int main()
{
    // Create Linked List
    // 1 -> 2 -> 2 -> 1

    ListNode* head = new ListNode(1);

    head->next = new ListNode(2);

    head->next->next = new ListNode(2);

    head->next->next->next = new ListNode(1);

    Solution obj;

    bool ans = obj.isPalindrome(head);

    if(ans)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}