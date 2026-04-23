#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;

    int temp;

    if(a!=b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    else
    {
        cout<<"Both numbers are same, swapping is not needed\n";
    }
    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}