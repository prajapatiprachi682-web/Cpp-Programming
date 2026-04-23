// 4. WAP to find the largest of 2 numbers


#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    
    cout<<"Enter first Number"<<endl;
    cin>>a;
    
    cout<<"Enter second Number"<<endl;
    cin>>b;
    
    if(a>b)
    {
        cout<<"a is Largest Number";
    }
    else if(b>a)
    {
        cout<<"b is largest Number";
    }
    else
    {
        cout<<"Both Numbers are equal";
    }
    return 0;
}