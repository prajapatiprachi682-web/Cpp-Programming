//  LeetCode 1051 - Height Checker



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int> expected = heights;

        sort(expected.begin(), expected.end());

        int ans = 0;

        for(int i = 0; i < heights.size(); i++)
        {
            if(heights[i] != expected[i])
            {
                ans++;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> heights = {1, 1, 4, 2, 1, 3};

    Solution obj;

    cout << "Students out of place = "
         << obj.heightChecker(heights)
         << endl;

    return 0;
}