// ✅ Strings
// ✅ Two Pointers
// ✅ In-place String Manipulation
// ✅ Reversal Algorithm
// ✅ LeetCode 557 - Reverse Words in a String III





#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s)
    {
        int start = 0;

        for(int end = 0; end <= s.size(); end++)
        {
            if(end == s.size() || s[end] == ' ')
            {
                reverse(s.begin() + start,
                        s.begin() + end);

                start = end + 1;
            }
        }

        return s;
    }
};

int main()
{
    string s = "Let's take LeetCode contest";

    Solution obj;

    cout << obj.reverseWords(s);

    return 0;
}