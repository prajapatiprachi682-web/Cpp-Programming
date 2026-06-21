// ✅ Arrays
// ✅ Counting
// ✅ Brute Force
// // ✅ LeetCode 1365 - How Many Numbers Are Smaller Than the Current Number






#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n);

        for(int i = 0; i < n; i++)
        {
            int cnt = 0;

            for(int j = 0; j < n; j++)
            {
                if(nums[j] < nums[i])
                {
                    cnt++;
                }
            }

            ans[i] = cnt;
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {8,1,2,2,3};

    Solution obj;

    vector<int> ans = obj.smallerNumbersThanCurrent(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}