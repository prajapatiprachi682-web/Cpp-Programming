// ✅ Strings
// ✅ Palindrome
// ✅ Expand Around Center
// ✅ Two Pointers
// ✅ LeetCode 647 - Palindromic Substrings





#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    int expand(string &s, int left, int right)
    {
        int count = 0;

        while(left >= 0 &&
              right < s.size() &&
              s[left] == s[right])
        {
            count++;

            left--;
            right++;
        }

        return count;
    }

    int countSubstrings(string s) {

        int count = 0;

        for(int i = 0; i < s.size(); i++)
        {
            count += expand(s, i, i);

            count += expand(s, i, i + 1);
        }

        return count;
    }
};

int main()
{
    string s = "aaa";

    Solution obj;

    cout << obj.countSubstrings(s);

    return 0;
}