//Traversing of 2D array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>matrix=
    {
        {1,2},
        {3,4},
    };

    // Row wise traversal

    cout<<"Row-wise traversal:"<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    // column wise traversal

    cout<<"Column-wise traversal:"<<endl;
    
    for(int j=0;j<2;j++)
    {
        for(int i=0;i<2;i++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}