// ✅ Strings
// ✅ Two Pointers
// ✅ Expand Around Center
// ✅ Palindrome
// ✅ Longest Palindromic Substring (LeetCode 5)





#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    string longestPalindrome(string &s) {

        int n = s.size();

        int start = 0;
        int maxLen = 1;

        auto expand = [&](int left, int right)
        {
            while(left >= 0 && right < n && s[left] == s[right])
            {
                if(right - left + 1 > maxLen)
                {
                    maxLen = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }
        };

        for(int i = 0; i < n; i++)
        {
            expand(i, i);       // Odd length
            expand(i, i + 1);   // Even length
        }

        return s.substr(start, maxLen);
    }
};

int main()
{
    string s = "babad";

    Solution obj;

    cout << obj.longestPalindrome(s);

    return 0;
}