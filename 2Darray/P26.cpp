// ✅ 2D Arrays (Matrix)
// ✅ Simulation
// ✅ Index Mapping
// ✅ Mathematics
// ✅ LeetCode 1260 - Shift 2D Grid




#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {
        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;

        k %= total;

        vector<vector<int>> ans(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int idx = i * n + j;

                int newIdx = (idx + k) % total;

                int r = newIdx / n;
                int c = newIdx % n;

                ans[r][c] = grid[i][j];
            }
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> grid =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int k = 1;

    Solution obj;

    vector<vector<int>> ans = obj.shiftGrid(grid, k);

    for(auto &row : ans)
    {
        for(int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}