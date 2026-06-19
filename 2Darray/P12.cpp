// ✅ Arrays
// ✅ Matrix
// ✅ Sorting
// ✅ Greedy
// ✅ LeetCode 2679 - Sum in a Matrix





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {

        int m = nums.size();
        int n = nums[0].size();

        for(auto &row : nums)
        {
            sort(row.begin(), row.end());
        }

        int ans = 0;

        for(int col = 0; col < n; col++)
        {
            int maxi = 0;

            for(int row = 0; row < m; row++)
            {
                maxi = max(maxi, nums[row][col]);
            }

            ans += maxi;
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> nums = {
        {7,2,1},
        {6,4,2},
        {6,5,3},
        {3,2,1}
    };

    Solution obj;

    cout << "Matrix Sum = "
         << obj.matrixSum(nums)
         << endl;

    return 0;
}