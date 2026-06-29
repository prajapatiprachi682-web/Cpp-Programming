// ✅ Arrays
// ✅ Dynamic Programming (DP)
// ✅ Kadane's Algorithm Variant
// ✅ Maximum Subarray Sum with One Deletion
// ✅ LeetCode 1186 - Maximum Subarray Sum with One Deletion





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& arr)
    {
        int keep = arr[0];
        int deleteOne = 0;

        int ans = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            deleteOne = max(deleteOne + arr[i], keep);

            keep = max(arr[i], keep + arr[i]);

            ans = max(ans, max(keep, deleteOne));
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {1, -2, 0, 3};

    Solution obj;

    cout << obj.maximumSum(arr);

    return 0;
}