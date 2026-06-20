// ✅ Arrays
// ✅ Two Pointers
// ✅ Greedy
// ✅ Minimum Swaps
// ✅ Binary Array





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;
        int swaps = 0;

        while(left < right)
        {
            while(left < right && nums[left] == 1)
                left++;

            while(left < right && nums[right] == 0)
                right--;

            if(left < right)
            {
                swap(nums[left], nums[right]);
                swaps++;

                left++;
                right--;
            }
        }

        return swaps;
    }
};

int main()
{
    vector<int> nums = {0,1,0,1};

    Solution obj;

    cout << obj.minimumSwaps(nums);

    return 0;
}