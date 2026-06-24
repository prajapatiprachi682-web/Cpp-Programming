// ✅ Strings
// ✅ Longest Common Prefix
// ✅ String Matching
// ✅ LeetCode 14 - Longest Common Prefix






#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++)
        {
            while(strs[i].find(prefix) != 0)
            {
                prefix.pop_back();

                if(prefix.empty())
                {
                    return "";
                }
            }
        }

        return prefix;
    }
};

int main()
{
    vector<string> strs =
    {
        "flower",
        "flow",
        "flight"
    };

    Solution obj;

    cout << obj.longestCommonPrefix(strs);

    return 0;
}