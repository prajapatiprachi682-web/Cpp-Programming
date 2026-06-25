// ✅ Strings
// ✅ Hashing (Frequency Array)
// ✅ Palindrome
// ✅ Character Frequency Counting
// ✅ GFG - Check if Characters can be Rearranged to Form a Palindrome





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool canFormPalindrome(string &s)
    {
        vector<int> freq(26, 0);

        for(char ch : s)
        {
            freq[ch - 'a']++;
        }

        int odd = 0;

        for(int x : freq)
        {
            if(x % 2)
            {
                odd++;
            }
        }

        return odd <= 1;
    }
};

int main()
{
    string s = "aabbc";

    Solution obj;

    if(obj.canFormPalindrome(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}