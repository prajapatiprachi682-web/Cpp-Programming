// ✅ 2D Array
// ✅ Matrix Traversal
// ✅ Spiral Matrix
// ✅ Boundary Traversal
// ✅ LeetCode 54





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int total = rows * cols;
        int count = 0;

        int r = 0;
        int c = 0;

        int endingrow = rows - 1;
        int endingcol = cols - 1;

        while(count < total)
        {
            // Left -> Right
            for(int index = c; index <= endingcol && count < total; index++)
            {
                ans.push_back(matrix[r][index]);
                count++;
            }
            r++;

            // Top -> Bottom
            for(int index = r; index <= endingrow && count < total; index++)
            {
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;

            // Right -> Left
            for(int index = endingcol; index >= c && count < total; index--)
            {
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            // Bottom -> Top
            for(int index = endingrow; index >= r && count < total; index--)
            {
                ans.push_back(matrix[index][c]);
                count++;
            }
            c++;
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;

    vector<int> ans = obj.spiralOrder(matrix);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}