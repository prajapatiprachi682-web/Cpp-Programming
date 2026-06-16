//  ✅ LeetCode 1470 - Shuffle the Array



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        vector<int> x;
        vector<int> y;

        for(int i = 0; i < n; i++)
        {
            x.push_back(nums[i]);
        }

        for(int i = n; i < 2 * n; i++)
        {
            y.push_back(nums[i]);
        }

        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            ans.push_back(x[i]);
            ans.push_back(y[i]);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    Solution obj;

    vector<int> ans = obj.shuffle(nums, n);

    cout << "Shuffled Array: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}