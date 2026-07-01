// ✅ Strings
// ✅ Backtracking
// ✅ Recursion
// ✅ Permutations
// ✅ GFG - Permutations of a String





#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:

    void solve(string &s, int idx, set<string> &st)
    {
        if(idx == s.size())
        {
            st.insert(s);
            return;
        }

        for(int i = idx; i < s.size(); i++)
        {
            swap(s[idx], s[i]);

            solve(s, idx + 1, st);

            swap(s[idx], s[i]);
        }
    }

    vector<string> findPermutation(string &s)
    {
        set<string> st;

        solve(s, 0, st);

        return vector<string>(st.begin(), st.end());
    }
};

int main()
{
    string s = "ABC";

    Solution obj;

    vector<string> ans = obj.findPermutation(s);

    for(string str : ans)
    {
        cout << str << endl;
    }

    return 0;
}