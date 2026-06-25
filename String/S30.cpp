// ✅ Dynamic Programming (DP)
// ✅ Strings
// ✅ Subsequences
// ✅ DP on Strings
// ✅ GFG - Distinct Occurrences





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countWays(string &s1, string &s2)
    {
        const int MOD = 1000000007;

        int n = s1.size();
        int m = s2.size();

        vector<vector<long long>> dp(
            n + 1,
            vector<long long>(m + 1, 0)
        );

        for(int i = 0; i <= n; i++)
            dp[i][0] = 1;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                dp[i][j] = dp[i - 1][j];

                if(s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] =
                    (dp[i][j] + dp[i - 1][j - 1]) % MOD;
                }
            }
        }

        return dp[n][m];
    }
};

int main()
{
    string s1 = "banana";
    string s2 = "ban";

    Solution obj;

    cout << obj.countWays(s1, s2);

    return 0;
}