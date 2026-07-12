// ✅ Arrays
// ✅ Extra Array Technique
// ✅ Positive & Negative Alternate Placement
// ✅ LeetCode 2149





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n);

        int posidx = 0;
        int negidx = 1;

        for(int num : nums)
        {
            if(num > 0)
            {
                ans[posidx] = num;
                posidx += 2;
            }
            else
            {
                ans[negidx] = num;
                negidx += 2;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};

    Solution obj;

    vector<int> ans = obj.rearrangeArray(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}