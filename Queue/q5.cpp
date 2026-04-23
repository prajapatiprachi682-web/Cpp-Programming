// Reverse first k element of Queue



#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse first K elements of queue
queue<int> reverseFirstK(queue<int> q, int k)
{
    int n = q.size();

    // Invalid case
    if (k > n || k <= 0)
        return q;

    stack<int> st;

    // Step 1: First k elements stack me daalo
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Stack ke elements queue me daalo
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    // Step 3: Remaining elements ko piche shift karo
    for (int i = 0; i < n - k; i++)
    {
        q.push(q.front());
        q.pop();
    }

    return q;
}

// Function to print queue
void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;

    // Input
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;

    cout << "Original Queue: ";
    printQueue(q);

    q = reverseFirstK(q, k);

    cout << "Queue after reversing first " << k << " elements: ";
    printQueue(q);

    return 0;
}