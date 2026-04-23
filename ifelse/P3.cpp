// 5. WAP to print all the even or odd numbers upto any given number.


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;
    
    // cout<<"Even Numbers are:";
    
    // for(int i=0; i<n; i++)
    // {
    //     if(i%2==0)
    //     {
    //         cout<<i<<" "<<endl;
    //     }
    // }
    
    
    cout<<"Odd Numbers are:";
    
    for(int i=0; i<n; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}
