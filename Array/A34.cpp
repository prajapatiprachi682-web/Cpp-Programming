//  LeetCode 485 - Max Consecutive Ones



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int cnt = 0;
        int maxx = 0;

        for(int num : nums)
        {
            if(num == 1)
            {
                cnt++;
                maxx = max(maxx, cnt);
            }
            else
            {
                cnt = 0;
            }
        }

        return maxx;
    }
};

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    Solution obj;

    cout << "Maximum Consecutive Ones = "
         << obj.findMaxConsecutiveOnes(nums)
         << endl;

    return 0;
}