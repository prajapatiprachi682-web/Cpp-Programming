#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    long long maxTotalValue(vector<int>& nums, int k)
    {
        int n = nums.size();

        int logn = 32 - __builtin_clz(n);

        vector<vector<int>> stMax(n, vector<int>(logn));
        vector<vector<int>> stMin(n, vector<int>(logn));

        for(int i = 0; i < n; i++)
        {
            stMax[i][0] = nums[i];
            stMin[i][0] = nums[i];
        }

        for(int j = 1; j < logn; j++)
        {
            for(int i = 0; i + (1 << j) <= n; i++)
            {
                stMax[i][j] =
                    max(stMax[i][j - 1],
                        stMax[i + (1 << (j - 1))][j - 1]);

                stMin[i][j] =
                    min(stMin[i][j - 1],
                        stMin[i + (1 << (j - 1))][j - 1]);
            }
        }

        priority_queue<tuple<int, int, int>> pq;

        for(int l = 0; l < n; l++)
        {
            int len = n - l;
            int j = 31 - __builtin_clz(len);

            int maxi =
                max(stMax[l][j],
                    stMax[n - (1 << j)][j]);

            int mini =
                min(stMin[l][j],
                    stMin[n - (1 << j)][j]);

            pq.push(make_tuple(maxi - mini, l, n - 1));
        }

        long long ans = 0;

        while(k--)
        {
            tuple<int, int, int> temp = pq.top();
            pq.pop();

            int val = get<0>(temp);
            int l   = get<1>(temp);
            int r   = get<2>(temp);

            ans += val;

            if(r > l)
            {
                int len = r - l;
                int j = 31 - __builtin_clz(len);

                int maxi =
                    max(stMax[l][j],
                        stMax[r - (1 << j)][j]);

                int mini =
                    min(stMin[l][j],
                        stMin[r - (1 << j)][j]);

                pq.push(make_tuple(maxi - mini, l, r - 1));
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 3, 2};
    int k = 2;

    Solution obj;

    cout << "Maximum Total Value = "
         << obj.maxTotalValue(nums, k)
         << endl;

    return 0;
}