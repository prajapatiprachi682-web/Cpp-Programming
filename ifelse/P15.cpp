// 14. Calculate area of rectangle (a = l × w)


#include<iostream>
using namespace std;

int main()
{
    int a;
    int l;
    int w;
    
    cout<<"Enter length and Width of Rectangle";
    cin>>l>>w;
    
    if(l>0 && w>0)
    {
        a=l*w;
        cout<<"The area of Ractangle= "<<a;
    }
    else
    {
        cout<<"Length and width of Ractangle must be positive";
    }
    return 0;
}