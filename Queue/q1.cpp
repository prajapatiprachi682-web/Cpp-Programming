//Implementation of Queue using array

#include<iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front =-1;
int rear=-1;

bool isempty()
{
    return(front==-1);
}

bool isfull()
{
    return(rear==SIZE-1);
}

void enqueue(int value)
{
    if(isfull())
    {
        cout<<"Queue Overflow\n";
        return;
    }
    if(front==-1)
    {
        front=0;
        rear++;
        queue[rear]=value;
        cout<<value<<"inserted\n";
    }
}

void dequeue()
{
    if(isempty())
    {
        cout<<"Queue Underflow\n";
        return;
    }
    cout<<queue[front]<<"deleted\n";
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}

void getFront()
{
    if(isempty())
    {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Front Elememt: "<<queue[front]<<endl;
}

void display()
{
    if(isempty())
    {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Queue Elemnts: ";
    for(int i=front; i<=rear; i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    getFront();

    return 0;
}