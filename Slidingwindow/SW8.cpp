// ✅ Strings
// ✅ Sliding Window
// ✅ Two Pointers
// ✅ HashSet (unordered_set)
// ✅ LeetCode 3 - Longest Substring Without Repeating Characters





#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.size(); right++)
        {
            while(st.find(s[right]) != st.end())
            {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main()
{
    string s = "abcabcbb";

    Solution obj;

    cout << obj.lengthOfLongestSubstring(s);

    return 0;
}