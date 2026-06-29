// ✅ Arrays
// ✅ Kadane's Algorithm
// ✅ Dynamic Programming
// ✅ Maximum & Minimum Subarray Sum
// ✅ LeetCode 1749 - Maximum Absolute Sum of Any Subarray





#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums)
    {
        int maxEnding = 0;
        int minEnding = 0;

        int maxSum = 0;
        int minSum = 0;

        for(int num : nums)
        {
            maxEnding = max(num, maxEnding + num);
            maxSum = max(maxSum, maxEnding);

            minEnding = min(num, minEnding + num);
            minSum = min(minSum, minEnding);
        }

        return max(maxSum, abs(minSum));
    }
};

int main()
{
    vector<int> nums = {2, -5, 1, -4, 3, -2};

    Solution obj;

    cout << obj.maxAbsoluteSum(nums);

    return 0;
}