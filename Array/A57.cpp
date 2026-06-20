// ✅ Arrays
// ✅ Prefix Product
// ✅ Suffix Product
// ✅ Space Optimization
// ✅ LeetCode 238 - Product of Array Except Self





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n, 1);

        for(int i = 1; i < n; i++)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int suffix = 1;

        for(int i = n - 1; i >= 0; i--)
        {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4};

    Solution obj;

    vector<int> ans = obj.productExceptSelf(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}