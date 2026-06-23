// ✅ Strings
// ✅ Brute Force
// ✅ Palindrome Checking
// ✅ Longest Palindromic Substring
// ✅ LeetCode 5





#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    bool isPalindrome(string str)
    {
        int left = 0;
        int right = str.size() - 1;

        while(left < right)
        {
            if(str[left] != str[right])
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    string longestPalindrome(string s) {

        int n = s.size();

        string ans = "";

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                string temp = s.substr(i, j - i + 1);

                if(isPalindrome(temp))
                {
                    if(temp.size() > ans.size())
                    {
                        ans = temp;
                    }
                }
            }
        }

        return ans;
    }
};

int main()
{
    string s = "babad";

    Solution obj;

    cout << obj.longestPalindrome(s);

    return 0;
}