// ✅ Dynamic Programming (DP)
// ✅ Strings
// ✅ Longest Common Substring
// ✅ 2D DP Table
// ✅ GFG - Longest Common Substring





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int longCommSubstr(string& s1, string& s2) {

        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        int ans = 0;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    ans = max(ans, dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }

        return ans;
    }
};

int main()
{
    string s1 = "ABCDGH";
    string s2 = "ACDGHR";

    Solution obj;

    cout << obj.longCommSubstr(s1, s2);

    return 0;
}