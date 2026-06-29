// ✅ Arrays
// ✅ Merge Sort
// ✅ Divide and Conquer
// ✅ Inversion Count
// ✅ GFG - Minimum Swaps to Sort (Using Inversion Count)





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int merge(int arr[], int l, int mid, int r)
    {
        vector<int> temp;

        int i = l;
        int j = mid + 1;

        int inv = 0;

        while(i <= mid && j <= r)
        {
            if(arr[i] <= arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                inv += (mid - i + 1);

                temp.push_back(arr[j]);
                j++;
            }
        }

        while(i <= mid)
            temp.push_back(arr[i++]);

        while(j <= r)
            temp.push_back(arr[j++]);

        for(int k = l; k <= r; k++)
        {
            arr[k] = temp[k - l];
        }

        return inv;
    }

    int mergeSort(int arr[], int l, int r)
    {
        if(l >= r)
            return 0;

        int mid = l + (r - l) / 2;

        int inv = 0;

        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);

        inv += merge(arr, l, mid, r);

        return inv;
    }

    int countSwaps(int arr[], int n)
    {
        return mergeSort(arr, 0, n - 1);
    }
};

int main()
{
    int arr[] = {2,4,1,3,5};

    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;

    cout << obj.countSwaps(arr, n);

    return 0;
}