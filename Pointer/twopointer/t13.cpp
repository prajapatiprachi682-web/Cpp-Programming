// ✅ Arrays
// ✅ Two Pointers
// ✅ Even-Odd Placement
// ✅ LeetCode 922 - Sort Array By Parity II





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        int odd = 1;

        for(int even = 0; even < nums.size(); even += 2)
        {
            if(nums[even] % 2 == 1)
            {
                while(nums[odd] % 2 == 1)
                {
                    odd += 2;
                }

                swap(nums[even], nums[odd]);
            }
        }

        return nums;
    }
};

int main()
{
    vector<int> nums = {4, 2, 5, 7};

    Solution obj;

    vector<int> ans = obj.sortArrayByParityII(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}