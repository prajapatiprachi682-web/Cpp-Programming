// ✅ Strings
// ✅ String Matching
// ✅ Simulation
// ✅ Character Marking
// ✅ GFG - Demonetize the String





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string demonitize(string S, string m, string n)
    {
        int len = S.size();

        vector<bool> remove(len, false);

        // Mark characters of m
        for(int i = 0; i + m.size() <= len; i++)
        {
            if(S.substr(i, m.size()) == m)
            {
                for(int j = i; j < i + m.size(); j++)
                    remove[j] = true;
            }
        }

        // Mark characters of n
        for(int i = 0; i + n.size() <= len; i++)
        {
            if(S.substr(i, n.size()) == n)
            {
                for(int j = i; j < i + n.size(); j++)
                    remove[j] = true;
            }
        }

        string ans = "";

        for(int i = 0; i < len; i++)
        {
            if(!remove[i])
                ans += S[i];
        }

        if(ans.empty())
            return "-1";

        return ans;
    }
};

int main()
{
    string S = "abcxyzabc";
    string m = "abc";
    string n = "xy";

    Solution obj;

    cout << obj.demonitize(S, m, n);

    return 0;
}