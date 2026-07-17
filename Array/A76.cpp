// Arrays
// ✅ Sorting
// ✅ Selection Sort
// ✅ In-Place Sorting
// ✅ Selection Sort Algorithm




#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for(int i = 0; i < n - 1; i++)
    {
        int mini = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[mini])
                mini = j;
        }

        swap(arr[i], arr[mini]);
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    selectionSort(arr);

    for(int x : arr)
        cout << x << " ";

    return 0;
}