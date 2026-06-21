// ✅ 2D Array
// ✅ Matrix Traversal
// ✅ Binary Search Concept
// ✅ Staircase Search
// ✅ LeetCode 240 - Search a 2D Matrix II





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0;
        int col = n - 1;

        while(row < m && col >= 0)
        {
            if(matrix[row][col] == target)
            {
                return true;
            }
            else if(matrix[row][col] > target)
            {
                col--;
            }
            else
            {
                row++;
            }
        }

        return false;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1,4,7,11},
        {2,5,8,12},
        {3,6,9,16}
    };

    int target = 5;

    Solution obj;

    cout << obj.searchMatrix(matrix, target);

    return 0;
}