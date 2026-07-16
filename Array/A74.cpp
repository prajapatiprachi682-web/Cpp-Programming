// ✅ Arrays
// ✅ Sorting
// ✅ Greedy
// ✅ Maximum Rectangle
// ✅ GFG - Largest Area in a Grid




#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int largestArea(int n, int m, vector<vector<int>> &arr)
    {
        vector<int> rows, cols;

        rows.push_back(0);
        cols.push_back(0);

        for(auto &x : arr)
        {
            rows.push_back(x[0]);
            cols.push_back(x[1]);
        }

        rows.push_back(n + 1);
        cols.push_back(m + 1);

        sort(rows.begin(), rows.end());
        sort(cols.begin(), cols.end());

        int maxRow = 0;
        int maxCol = 0;

        for(int i = 1; i < rows.size(); i++)
            maxRow = max(maxRow, rows[i] - rows[i - 1] - 1);

        for(int i = 1; i < cols.size(); i++)
            maxCol = max(maxCol, cols[i] - cols[i - 1] - 1);

        return maxRow * maxCol;
    }
};

int main()
{
    int n = 5;
    int m = 6;

    vector<vector<int>> arr =
    {
        {2,3},
        {4,5}
    };

    Solution obj;

    cout << obj.largestArea(n, m, arr);

    return 0;
}