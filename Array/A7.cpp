// Swap Alternate Elements


#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10,20,30,40,50,60};

    int n = 6;

    for(int i = 0; i < n-1; i += 2)
    {
        swap(arr[i], arr[i+1]);
    }

    cout << "Swapped Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}