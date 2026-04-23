#include<iostream>
using namespace std;

int main()
{
    double r;
    cout<<"Enter the radius of circle";
    cin>>r;

    double pi=3.14;
    double a=pi*r*r;

    if(r>0)
    {
        a=pi*r*r;
        cout<<"The area of Circle="<<a;
    }
    else
    {
        cout<<"Radius must be greater than 0";
    }
    return 0;
}