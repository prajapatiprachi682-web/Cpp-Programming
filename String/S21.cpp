// ✅ Dynamic Programming (DP)
// ✅ Strings
// ✅ Longest Repeating Substring
// ✅ Longest Repeating Non-Overlapping Substring
// ✅ GFG Important DP Problem





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestSubstring(string &s) {

        int n = s.size();

        vector<vector<int>> dp(n + 1,
                               vector<int>(n + 1, 0));

        int maxLen = 0;
        int endIndex = 0;

        for(int i = 1; i <= n; i++)
        {
            for(int j = i + 1; j <= n; j++)
            {
                if(s[i - 1] == s[j - 1])
                {
                    dp[i][j] =
                        min(dp[i - 1][j - 1] + 1,
                            j - i);

                    if(dp[i][j] > maxLen)
                    {
                        maxLen = dp[i][j];
                        endIndex = i;
                    }
                }
            }
        }

        if(maxLen == 0)
        {
            return "-1";
        }

        return s.substr(endIndex - maxLen,
                        maxLen);
    }
};

int main()
{
    string s = "banana";

    Solution obj;

    cout << obj.longestSubstring(s);

    return 0;
}