// ✅ Arrays
// ✅ Merge Sort
// ✅ Divide and Conquer
// ✅ Two Pointers
// ✅ LeetCode 2426 - Number of Pairs Satisfying Inequality





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    long long ans = 0;
    int diffGlobal;

    void merge(vector<long long>& arr, int low, int mid, int high)
    {
        int j = mid + 1;

        for(int i = low; i <= mid; i++)
        {
            while(j <= high &&
                  arr[i] > arr[j] + (long long)diffGlobal)
            {
                j++;
            }

            ans += (high - j + 1);
        }

        vector<long long> temp;

        int left = low;
        int right = mid + 1;

        while(left <= mid && right <= high)
        {
            if(arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        while(left <= mid)
            temp.push_back(arr[left++]);

        while(right <= high)
            temp.push_back(arr[right++]);

        for(int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }

    void mergeSort(vector<long long>& arr, int low, int high)
    {
        if(low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }

    long long numberOfPairs(vector<int>& nums1,
                            vector<int>& nums2,
                            int diff)
    {
        diffGlobal = diff;

        int n = nums1.size();

        vector<long long> arr(n);

        for(int i = 0; i < n; i++)
        {
            arr[i] = (long long)nums1[i] - nums2[i];
        }

        mergeSort(arr, 0, n - 1);

        return ans;
    }
};

int main()
{
    vector<int> nums1 = {3,2,5};
    vector<int> nums2 = {2,2,1};
    int diff = 1;

    Solution obj;

    cout << obj.numberOfPairs(nums1, nums2, diff);

    return 0;
}