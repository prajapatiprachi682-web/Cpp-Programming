#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool binarySearch(vector<int>& arr, int k)
    {
        int low = 0;
        int high = arr.size() - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(arr[mid] == k)
            {
                return true;
            }
            else if(arr[mid] < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main()
{
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14};
    int k = 10;

    Solution obj;

    if(obj.binarySearch(arr, k))
    {
        cout << k << " Found" << endl;
    }
    else
    {
        cout << k << " Not Found" << endl;
    }

    return 0;
}