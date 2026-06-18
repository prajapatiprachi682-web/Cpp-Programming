// ✅ Arrays
// ✅ Traversal
// ✅ Min & Max Element
// ✅ LeetCode 2148 - Count Elements With Strictly Smaller and Greater Elements





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums) {

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        int count = 0;

        for(int num : nums)
        {
            if(num > mn && num < mx)
                count++;
        }

        return count;
    }
};

int main()
{
    vector<int> nums = {11, 7, 2, 15};

    Solution obj;

    cout << "Count = "
         << obj.countElements(nums)
         << endl;

    return 0;
}