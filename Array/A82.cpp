// ✅ Arrays
// ✅ Number Theory
// ✅ GCD (Greatest Common Divisor)
// ✅ Inclusion-Exclusion Principle
// ✅ Prefix Sum
// ✅ Binary Search
// ✅ LeetCode 3312 - Sorted GCD Pair Queries



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<int> gcdValues(vector<int>& nums,
                          vector<long long>& queries)
    {
        int mx = *max_element(nums.begin(), nums.end());

        vector<long long> freq(mx + 1, 0);

        for(int x : nums)
            freq[x]++;

        vector<long long> pairs(mx + 1, 0);

        for(int d = 1; d <= mx; d++)
        {
            long long cnt = 0;

            for(int j = d; j <= mx; j += d)
                cnt += freq[j];

            pairs[d] = cnt * (cnt - 1) / 2;
        }

        for(int d = mx; d >= 1; d--)
        {
            for(int j = d + d; j <= mx; j += d)
                pairs[d] -= pairs[j];
        }

        vector<long long> prefix(mx + 1, 0);

        for(int d = 1; d <= mx; d++)
            prefix[d] = prefix[d - 1] + pairs[d];

        vector<int> ans;

        for(long long q : queries)
        {
            int g = lower_bound(prefix.begin(),
                                prefix.end(),
                                q + 1)
                    - prefix.begin();

            ans.push_back(g);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {2,3,4};

    vector<long long> queries = {0,1,2};

    Solution obj;

    vector<int> ans = obj.gcdValues(nums, queries);

    for(int x : ans)
        cout << x << " ";

    return 0;
}