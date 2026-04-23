// Design a data structure, which represents two stacks using only one array common for both stacks. The data structure should support the following operations:

// push1(NUM) - Push ‘NUM’ into stack1.
// push2(NUM) - Push ‘NUM’ into stack2.
// pop1() - Pop out a top element from stack1 and return popped element, in case of underflow return -1.
// pop2() - Pop out a top element from stack2 and return popped element, in case of underflow return -1.
// There are 2 types of queries in the input

// Type 1 - These queries correspond to Push operation.
// Type 2 - These queries correspond to Pop operation



#include<iostream>
using namespace std;

#define MAX 5

int arr[MAX];
int top1=-1;
int top2=MAX;

void push1(int num)
{
    if(top1+1==top2)
    {
        cout << "Overflow in Stack 1" << endl;
        return;
    }
    arr[++top1]=num;
}

void push2(int num)
{
    if(top1+1==top2)
    {
        cout << "Overflow in Stack 2" << endl;
        return;
    }
    arr[--top2]=num;
}

int pop1()
{
    if(top1==-1)
    {
        cout << "Underflow in Stack 1" << endl;
        return -1;
    }
    return arr[top1--];
}

int pop2()
{
    if(top2==MAX)
    {
        cout << "Underflow in Stack 2" << endl;
        return -1;
    }
    return arr[top2++];
}

void display()
{
    cout<<"Array: ";
    for(int i=0; i<MAX; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    push1(10);
    push1(20);
    push2(30);
    push2(40);

    display();

    cout << "Pop from Stack 1: " << pop1() << endl;
    cout << "Pop from Stack 2: " << pop2() << endl;

    return 0;
}