// Reverse of queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse queue
void reverseQueue(queue<int> &q)
{
    stack<int> st;

    // Step 1: Queue ke elements stack me daalo
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Stack ke elements wapas queue me daalo
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
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

    cout << "Original Queue: ";
    printQueue(q);

    reverseQueue(q);

    cout << "Reversed Queue: ";
    printQueue(q);

    return 0;
}