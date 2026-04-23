// 3. WAP to check whether a person is eligible to vote (age >= 18).



#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter a age=";
    cin>>age;
    
    if(age<0)
    {
        cout<<"Invalid age";
    }
    else if(age>=18)
    {
        cout<<"Person is eligible to vote";
    }
    else
    {
        cout<<"Person is not eligible to vote";
    }
    return 0;
}
