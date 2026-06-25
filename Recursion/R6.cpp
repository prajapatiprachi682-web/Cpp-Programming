// ✅ Recursion
// ✅ Backtracking
// ✅ Strings
// ✅ Palindrome Partitioning
// ✅ LeetCode 132 - Palindrome Partitioning II





#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:

    bool isPalindrome(string &s, int l, int r)
    {
        while(l < r)
        {
            if(s[l] != s[r])
                return false;

            l++;
            r--;
        }

        return true;
    }

    int solve(string &s, int index)
    {
        if(index == s.size())
            return 0;

        int ans = INT_MAX;

        for(int i = index; i < s.size(); i++)
        {
            if(isPalindrome(s, index, i))
            {
                ans = min(ans,
                          1 + solve(s, i + 1));
            }
        }

        return ans;
    }

    int minCut(string s)
    {
        return solve(s, 0) - 1;
    }
};

int main()
{
    string s = "aab";

    Solution obj;

    cout << obj.minCut(s);

    return 0;
}