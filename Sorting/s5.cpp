// ✅ Sorting
// ✅ Insertion Sort
// ✅ Arrays
// ✅ In-Place Sorting
// ✅ LeetCode - Sort an Array (Insertion Sort Approach)





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& arr)
    {
        int n = arr.size();

        for(int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;

            while(j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }
};

int main()
{
    vector<int> arr = {5,2,4,6,1,3};

    Solution obj;

    obj.insertionSort(arr);

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}