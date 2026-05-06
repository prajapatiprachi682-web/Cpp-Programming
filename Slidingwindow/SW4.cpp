#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k)
{
    int n = nums.size();

    // First window sum
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    int maxSum = sum;

    // Sliding Window
    for (int i = k; i < n; i++)
    {
        sum = sum + nums[i] - nums[i - k];

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    return (double)maxSum / k;
}

int main()
{
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double ans = findMaxAverage(nums, k);

    cout << "Maximum Average = " << ans << endl;

    return 0;
}