// Implementation of CQ


#include<iostream>
using namespace std;

class CircularQueue
{
    int* arr;
    int currsize;
    int totalsize;
    int f, r;

    public:
    CircularQueue(int size) // constructor
    {
        totalsize=size;
        arr=new int[totalsize];
        currsize=0;
        f=0, r=-1;
    }

    void push(int data)
    {
        if(currsize==totalsize)
        {
            cout<<"CQ is Full\n";
            return;
        }
        r=(r+1)%totalsize;
        arr[r]=data;
        currsize++;
    }

    void pop()
    {
        if(empty())
        {
            cout<<"CQ is Empty\n";
            return;
        }
        f=(f+1)%totalsize;
        currsize--;
    }

    int front()
    {
        if(empty())
        {
            cout<<"CQ is Empty\n";
            return -1;
        }
        return arr[f];
    }

    bool empty()
    {
        return currsize==0;
    }

    void printArr()
    {
        for(int i=0; i<totalsize; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    //cq.printArr();
    while(!cq.empty())
    {
        cout<<cq.front()<<" ";
        cq.pop();
    }
    return 0;
}