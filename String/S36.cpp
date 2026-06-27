// ✅ Strings
// ✅ Hashing (unordered_set)
// ✅ Set Operations
// ✅ Character Frequency
// ✅ GFG - Uncommon Characters





#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    string uncommonChars(string &s1, string &s2)
    {
        unordered_set<char> st1, st2;

        for(char c : s1)
            st1.insert(c);

        for(char c : s2)
            st2.insert(c);

        string ans = "";

        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            if(st1.count(ch) ^ st2.count(ch))
            {
                ans += ch;
            }
        }

        if(ans.empty())
            return "-1";

        return ans;
    }
};

int main()
{
    string s1 = "geeks";
    string s2 = "forgeeks";

    Solution obj;

    cout << obj.uncommonChars(s1, s2);

    return 0;
}