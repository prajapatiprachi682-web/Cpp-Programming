// ✅ Arrays
// ✅ Merge Sort
// ✅ Divide & Conquer
// ✅ Inversion Count
// ✅ Coding Ninjas - Count Inversions




#include <bits/stdc++.h>
using namespace std;

long long merge(long long *arr, int low, int mid, int high)
{
    vector<long long> temp;

    int left = low;
    int right = mid + 1;

    long long cnt = 0;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            cnt += (mid - left + 1);
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
        temp.push_back(arr[left++]);

    while(right <= high)
        temp.push_back(arr[right++]);

    for(int i = low; i <= high; i++)
        arr[i] = temp[i - low];

    return cnt;
}

long long mergeSort(long long *arr, int low, int high)
{
    if(low >= high)
        return 0;

    int mid = low + (high - low) / 2;

    long long cnt = 0;

    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);

    return cnt;
}

long long getInversions(long long *arr, int n)
{
    return mergeSort(arr, 0, n - 1);
}

int main()
{
    long long arr[] = {5, 3, 2, 1, 4};

    int n = 5;

    cout << getInversions(arr, n);

    return 0;
}