// ✅ Strings
// ✅ Sliding Window
// ✅ Hashing
// ✅ Last Occurrence Technique
// ✅ GFG - Longest Unique Substring





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int longestUniqueSubstring(string &s) {

        vector<int> last(26, -1);

        int left = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++)
        {
            if(last[s[right] - 'a'] >= left)
            {
                left = last[s[right] - 'a'] + 1;
            }

            last[s[right] - 'a'] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

int main()
{
    string s = "abcabcbb";

    Solution obj;

    cout << obj.longestUniqueSubstring(s);

    return 0;
}