#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int j = 0;

        while(j < nums.size() && nums[j] != 0)
            j++;

        for(int i = j + 1; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution obj;

    obj.moveZeroes(nums);

    cout << "Array after moving zeroes: ";

    for(int x : nums)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}