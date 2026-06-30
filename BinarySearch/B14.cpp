// ✅ Binary Search
// ✅ Arrays
// ✅ Floor in a Sorted Array
// ✅ Lower Bound Concept
// ✅ GFG - Floor in a Sorted Array





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findFloor(vector<int>& arr, int x)
    {
        int low = 0;
        int high = arr.size() - 1;

        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(arr[mid] <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {1,2,4,6,10};

    int x = 5;

    Solution obj;

    cout << obj.findFloor(arr, x);

    return 0;
}