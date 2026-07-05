// 📌 Topic
// Array
// Remove Duplicates from Sorted Array
// 📌 LeetCode
// ✅ #26 — Remove Duplicates from Sorted Array




#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int temp[100];
    int k = 0;

    temp[k++] = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            temp[k++] = arr[i];
        }
    }

    for(int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }

    return k;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, n);

    cout << "Number of unique elements = " << k << endl;

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}