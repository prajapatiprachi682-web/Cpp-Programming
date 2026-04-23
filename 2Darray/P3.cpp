// Find index

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>matrix=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows=matrix.size();
    int cols=matrix[0].size();

    cout<<"Element->1D Index"<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            int index=cols*i+j;
            cout<<matrix[i][j]<<" "<<index<<endl;
        }
    }
    return 0;
}