//Any year input through keyboard, determine whether the year is leap year or not.


#include<iostream>
using namespace std;

int main()
{
    int y;
    cout<<"Enter year";
    cin>>y;

    if(y%400==0)
    {
        cout<<"The year is leap";
    }
    else if(y%4==0 && y%100!=0)
    {
        cout<<"The year is leap";
    }
    else
    {
        cout<<"The year is not leap";
    }
}
