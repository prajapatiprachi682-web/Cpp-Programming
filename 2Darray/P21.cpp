// ✅ Matrix
// ✅ Sorting
// ✅ Greedy
// ✅ LeetCode 2500 - Delete Greatest Value in Each Row






#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        for(auto &row : grid)
        {
            sort(row.begin(), row.end());
        }

        int ans = 0;

        for(int j = 0; j < n; j++)
        {
            int mx = 0;

            for(int i = 0; i < m; i++)
            {
                mx = max(mx, grid[i][j]);
            }

            ans += mx;
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> grid = {
        {1,2,4},
        {3,3,1}
    };

    Solution obj;

    cout << obj.deleteGreatestValue(grid);

    return 0;
}