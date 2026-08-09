// ✅ Queue
// ✅ Stack
// ✅ Queue using Stacks
// ✅ Data Structure Design
// ✅ Coding Ninjas - Implement Queue using Stacks
// ✅ LeetCode 232 - Implement Queue using Stacks




#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1, s2;

public:

    void enQueue(int val)
    {
        s1.push(val);
    }

    int deQueue()
    {
        if(s1.empty() && s2.empty())
            return -1;

        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int ans = s2.top();
        s2.pop();

        return ans;
    }

    int peek()
    {
        if(s1.empty() && s2.empty())
            return -1;

        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool isEmpty()
    {
        return s1.empty() && s2.empty();
    }
};

int main()
{
    Queue q;

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);

    cout << q.peek() << endl;
    cout << q.deQueue() << endl;
    cout << q.peek() << endl;

    return 0;
}