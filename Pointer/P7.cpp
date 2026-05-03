// Array as Function Argument




#include<iostream>
using namespace std;

void solve(int arr[], int n)  // same as int *arr
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    solve(arr, 5);

    return 0;
}