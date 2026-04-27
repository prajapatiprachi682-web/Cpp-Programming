#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int i = 1; // first index
    int j = 3; // second index

    swap(arr[i], arr[j]);

    for(int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}