// ✅ Sorting
// ✅ Selection Sort
// ✅ Arrays
// ✅ In-Place Sorting
// ✅ Selection Sort Algorithm





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void selectionSort(vector<int> &arr)
    {
        int n = arr.size();

        for(int i = 0; i < n - 1; i++)
        {
            int minIndex = i;

            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }

            if(minIndex != i)
            {
                swap(arr[i], arr[minIndex]);
            }
        }
    }
};

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    Solution obj;

    obj.selectionSort(arr);

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}