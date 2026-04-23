// 9. Input marks and print the grade


#include<iostream>
using namespace std;

int main()
{
    int marks;
    
    cout<<"Enter a Marks";
    cin>>marks;
    
    if(marks>=90 && marks<=100)
    {
        cout<<"Grade is A";
    }
    else if(marks>=75 && marks<=90)
    {
        cout<<"Grade is B";
    }
    else if(marks>=60 && marks<=75)
    {
        cout<<"Grade is C";
    }
    else if(marks>=40 && marks<=60)
    {
        cout<<"Grade is D";
    }
    else
    {
        cout<<"Failed";
    }
    return 0;
}