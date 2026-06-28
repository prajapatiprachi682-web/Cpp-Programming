// ✅ Sorting
// ✅ Divide and Conquer
// ✅ Quick Sort
// ✅ Partition Algorithm (Hoare Style)
// ✅ LeetCode 912 - Sort an Array





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int partition(vector<int>& nums, int low, int high)
    {
        int pivot = nums[low];

        int i = low;
        int j = high;

        while(i < j)
        {
            while(i <= high && nums[i] <= pivot)
                i++;

            while(nums[j] > pivot)
                j--;

            if(i < j)
                swap(nums[i], nums[j]);
        }

        swap(nums[low], nums[j]);

        return j;
    }

    void quickSort(vector<int>& nums, int low, int high)
    {
        if(low < high)
        {
            int p = partition(nums, low, high);

            quickSort(nums, low, p - 1);

            quickSort(nums, p + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums)
    {
        quickSort(nums, 0, nums.size() - 1);

        return nums;
    }
};

int main()
{
    vector<int> nums = {5, 2, 3, 1};

    Solution obj;

    vector<int> ans = obj.sortArray(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}