// 13. WAP to perform +, -, *, /


#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    char op;
    
    cout<<"Enter Two Numbers";
    cin>>a>>b;
    
    cout<<"Enter an opreator";
    cin>>op;
    
    if(op=='+')
    {
        cout<<"addition= "<<a+b;
    }
    else if(op=='-')
    {
        cout<<"Substraction= "<<a-b;
    }
    else if(op=='*')
    {
        cout<<"Multiplication= "<<a*b;
    }
    else if(op=='/')
    {
        cout<<"Division= "<<a/b;
    }
    else
    {
        cout<<"Invalid opreator";
    }
    return 0;
}