// LeetCode 448 - Find All Numbers Disappeared in an Array



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n = nums.size();

        vector<int> freq(n + 1, 0);

        for(int num : nums)
        {
            freq[num]++;
        }

        vector<int> ans;

        for(int i = 1; i <= n; i++)
        {
            if(freq[i] == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    Solution obj;

    vector<int> ans = obj.findDisappearedNumbers(nums);

    cout << "Missing Numbers: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}