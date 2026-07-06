// 📌 Topic
// Array
// Check if Array Is Sorted and Rotated
// 📌 LeetCode
// ✅ #1752 — Check if Array Is Sorted and Rotated





#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool check(vector<int>& nums)
    {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }

        return count <= 1;
    }
};

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};

    Solution obj;

    if(obj.check(nums))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}