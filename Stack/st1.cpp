// Stack opreations

#include <iostream>
using namespace std;

#define MAX 5

int st[MAX];
int top = -1;

// Push Operation
void push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    top++;
    st[top] = x;
    cout << x << " pushed into stack" << endl;
}

// Pop Operation
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << st[top] << " popped from stack" << endl;
    top--;
}

// Peek Operation
void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Top element: " << st[top] << endl;
}

// Display Operation
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
        cout << st[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    peek();

    display();

    return 0;
}