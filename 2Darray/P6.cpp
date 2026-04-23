// calculate sum and maxsum of column

#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int MaxSum=0;

    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum+=arr[i][j];
        }
        if(sum>MaxSum)
        {
            MaxSum=sum;
        }
    }
    cout<<"Maximum Column Sum="<<MaxSum;
}