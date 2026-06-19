// ✅ Strings
// ✅ Sliding Window
// ✅ Variable Size Sliding Window
// ✅ Hashing / Frequency Array
// ✅ LeetCode 76 - Minimum Window Substring





#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> freq(128, 0);

        for(char ch : t)
        {
            freq[ch]++;
        }

        int left = 0;
        int right = 0;

        int count = t.size();

        int minLen = INT_MAX;
        int start = 0;

        while(right < s.size())
        {
            if(freq[s[right]] > 0)
            {
                count--;
            }

            freq[s[right]]--;
            right++;

            while(count == 0)
            {
                if(right - left < minLen)
                {
                    minLen = right - left;
                    start = left;
                }

                freq[s[left]]++;

                if(freq[s[left]] > 0)
                {
                    count++;
                }

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    Solution obj;

    cout << obj.minWindow(s, t);

    return 0;
}