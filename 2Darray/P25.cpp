// ✅ Matrix
// ✅ Greedy
// ✅ Math
// ✅ Absolute Values
// ✅ LeetCode 1975 - Maximum Matrix Sum





#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        long long sum = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for(auto &row : matrix)
        {
            for(int num : row)
            {
                sum += abs((long long)num);

                if(num < 0)
                {
                    negCount++;
                }

                minAbs = min(minAbs, abs(num));
            }
        }

        if(negCount % 2 == 0)
        {
            return sum;
        }

        return sum - 2LL * minAbs;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, -1},
        {-1, 1}
    };

    Solution obj;

    cout << obj.maxMatrixSum(matrix);

    return 0;
}