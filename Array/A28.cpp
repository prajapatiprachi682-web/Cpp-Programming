//3689. Maximum Total Subarray Value I
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long maxTotalValue(vector<int>& nums, int k)
    {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        return 1LL * k * (maxi - mini);
    }
};

int main()
{
    vector<int> nums = {1, 3, 2};
    int k = 2;

    Solution obj;

    cout << "Maximum Total Value = "
         << obj.maxTotalValue(nums, k)
         << endl;

    return 0;
}