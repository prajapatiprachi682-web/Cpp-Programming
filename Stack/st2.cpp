// Implement stack using array(using oops concept)

#include<iostream>
using namespace std;

class Stack
{
    public:
    int size;
    int *arr;
    int top;
    
    Stack(int size)
    {
       this->size=size;
       arr=new int[size];
       top=-1;
    }

    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"overflow\n";
            return;
        }

        arr[++top]=data;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"underflow\n";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1;
    }

    int getSize()
    {
        return top+1;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
    {
        Stack st(3);

        st.push(10);
        st.push(20);
        st.push(30);

        cout<<st.peek()<<endl;

        st.pop();

        cout<<st.peek()<<endl;

        cout<<"Size:"<<st.getSize()<<endl;

        return 0;
    }
