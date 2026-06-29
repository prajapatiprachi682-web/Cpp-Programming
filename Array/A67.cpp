// ✅ Arrays
// ✅ Kadane's Algorithm
// ✅ Circular Array
// ✅ Dynamic Programming
// ✅ LeetCode 918 - Maximum Sum Circular Subarray





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums)
    {
        int totalSum = 0;

        int maxSum = nums[0];
        int currMax = 0;

        int minSum = nums[0];
        int currMin = 0;

        for(int num : nums)
        {
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);

            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);

            totalSum += num;
        }

        if(maxSum < 0)
        {
            return maxSum;
        }

        return max(maxSum, totalSum - minSum);
    }
};

int main()
{
    vector<int> nums = {5, -3, 5};

    Solution obj;

    cout << obj.maxSubarraySumCircular(nums);

    return 0;
}