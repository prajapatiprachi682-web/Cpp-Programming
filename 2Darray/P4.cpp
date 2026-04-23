// Find row and column in 2D vector

#include<iostream>
using namespace std;

int main()
{
    int cols=3;
    int index=4;

    int row=index/cols;
    int col=index%cols;

    cout<<"Row ="<<row<<endl;
    cout<<"Column ="<<col<<endl;

    return 0;
}