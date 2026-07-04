// Array
// Prefix Sum
// Hash Map
// ✅ #560 — Subarray Sum Equals K




#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k)
{
    unordered_map<int, int> mp;

    mp[0] = 1;

    int sum = 0;
    int count = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if(mp.find(sum - k) != mp.end())
        {
            count += mp[sum - k];
        }

        mp[sum]++;
    }

    return count;
}

int main()
{
    vector<int> nums = {1, 1, 1};
    int k = 2;

    int ans = subarraySum(nums, k);

    cout << "Total Subarrays = " << ans << endl;

    return 0;
}