// ✅ Strings
// ✅ Hashing (unordered_set)
// ✅ Set Operations
// ✅ Character Frequency
// ✅ GFG - Concatenation of Two Strings





#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string concatenatedString(string s1, string s2)
    {
        unordered_set<char> st1, st2;

        for(char ch : s1)
            st1.insert(ch);

        for(char ch : s2)
            st2.insert(ch);

        string ans = "";

        for(char ch : s1)
        {
            if(!st2.count(ch))
                ans += ch;
        }

        for(char ch : s2)
        {
            if(!st1.count(ch))
                ans += ch;
        }

        return ans.empty() ? "-1" : ans;
    }
};

int main()
{
    string s1 = "aacdb";
    string s2 = "gafd";

    Solution obj;

    cout << obj.concatenatedString(s1, s2);

    return 0;
}