// ✅ Arrays
// ✅ Cyclic Sort
// ✅ In-Place Hashing
// ✅ Index Placement
// ✅ Coding Ninjas / LeetCode 41 - First Missing Positive





#include <bits/stdc++.h>
using namespace std;

int firstMissing(int arr[], int n)
{
    int i = 0;

    while(i < n)
    {
        if(arr[i] > 0 &&
           arr[i] <= n &&
           arr[i] != arr[arr[i] - 1])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
        else
        {
            i++;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] != i + 1)
            return i + 1;
    }

    return n + 1;
}

int main()
{
    int arr[] = {3,4,-1,1};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << firstMissing(arr, n);

    return 0;
}