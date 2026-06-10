// Maximum subarray min Product



#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxSumMinProduct(vector<int>& nums)
    {
        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for(int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        vector<int> left(n);
        vector<int> right(n);

        stack<int> st;

        // Previous Smaller Element
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() &&
                  nums[st.top()] >= nums[i])
            {
                st.pop();
            }

            left[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        while(!st.empty())
        {
            st.pop();
        }

        // Next Smaller Element
        for(int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() &&
                  nums[st.top()] > nums[i])
            {
                st.pop();
            }

            right[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        long long ans = 0;

        for(int i = 0; i < n; i++)
        {
            long long rangeSum =
                prefix[right[i]]
                - prefix[left[i] + 1];

            ans = max(ans,
                      rangeSum * nums[i]);
        }

        return ans % 1000000007;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 2};

    Solution obj;

    cout << "Maximum Sum Min Product = "
         << obj.maxSumMinProduct(nums)
         << endl;

    return 0;
}