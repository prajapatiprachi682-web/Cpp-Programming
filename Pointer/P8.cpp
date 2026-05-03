// 2D Array with Pointer Concept




#include<iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{1,2,3},{4,5,6}};

    cout << arr[1][2] << endl;           // 6
    cout << *(*(arr + 1) + 2) << endl;   // 6

    return 0;
}