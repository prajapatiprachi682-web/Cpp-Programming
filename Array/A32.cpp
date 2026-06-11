//



#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    int totalStrength(vector<int>& strength)
    {
        int n = strength.size();
        long long MOD = 1000000007;

        vector<long long> pre(n + 1, 0);
        vector<long long> ppre(n + 2, 0);

        for(int i = 0; i < n; i++)
        {
            pre[i + 1] = (pre[i] + strength[i]) % MOD;
        }

        for(int i = 0; i <= n; i++)
        {
            ppre[i + 1] = (ppre[i] + pre[i]) % MOD;
        }

        vector<int> left(n), right(n);

        stack<int> st;

        // Previous Smaller Element
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() &&
                  strength[st.top()] >= strength[i])
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
                  strength[st.top()] > strength[i])
            {
                st.pop();
            }

            right[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        long long ans = 0;

        for(int i = 0; i < n; i++)
        {
            int l = left[i];
            int r = right[i];

            long long leftCount = i - l;
            long long rightCount = r - i;

            long long leftSum =
                (ppre[i + 1] - ppre[max(0, l + 1)] + MOD) % MOD;

            long long rightSum =
                (ppre[r + 1] - ppre[i + 1] + MOD) % MOD;

            long long total =
                (rightSum * leftCount % MOD
                - leftSum * rightCount % MOD
                + MOD) % MOD;

            ans =
                (ans +
                1LL * strength[i] * total) % MOD;
        }

        return (int)ans;
    }
};

int main()
{
    vector<int> strength = {1, 3, 1, 2};

    Solution obj;

    cout << "Total Strength = "
         << obj.totalStrength(strength)
         << endl;

    return 0;
}