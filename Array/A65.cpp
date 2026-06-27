// ✅ Arrays
// ✅ Prefix Sum
// ✅ Fenwick Tree (Binary Indexed Tree)
// ✅ Coordinate Compression
// ✅ Counting Subarrays
// ✅ LeetCode 3410 - Count Majority Subarrays




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target)
    {
        int n = nums.size();

        vector<int> prefix(n + 1, 0);

        for(int i = 0; i < n; i++)
        {
            if(nums[i] == target)
                prefix[i + 1] = prefix[i] + 1;
            else
                prefix[i + 1] = prefix[i] - 1;
        }

        vector<int> comp = prefix;
        sort(comp.begin(), comp.end());
        comp.erase(unique(comp.begin(), comp.end()), comp.end());

        vector<int> bit(comp.size() + 2, 0);

        auto update = [&](int idx)
        {
            idx++;

            while(idx < bit.size())
            {
                bit[idx]++;
                idx += idx & (-idx);
            }
        };

        auto query = [&](int idx)
        {
            idx++;

            long long sum = 0;

            while(idx > 0)
            {
                sum += bit[idx];
                idx -= idx & (-idx);
            }

            return sum;
        };

        long long ans = 0;

        for(int x : prefix)
        {
            int idx = lower_bound(comp.begin(), comp.end(), x) - comp.begin();

            ans += query(idx - 1);

            update(idx);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 1};
    int target = 1;

    Solution obj;

    cout << obj.countMajoritySubarrays(nums, target);

    return 0;
}