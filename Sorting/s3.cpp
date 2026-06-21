// ✅ Arrays
// ✅ Sorting
// ✅ Linear Search
// ✅ LeetCode 2089 - Find Target Indices After Sorting Array






#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1,2,5,2,3};
    int target = 2;

    Solution obj;

    vector<int> ans = obj.targetIndices(nums, target);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}