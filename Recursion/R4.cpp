// ✅ Recursion
// ✅ Backtracking
// ✅ Strings
// ✅ Palindrome Partitioning
// ✅ LeetCode 131 - Palindrome Partitioning





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:

    bool isPalindrome(string s)
    {
        int l = 0;
        int r = s.size() - 1;

        while(l < r)
        {
            if(s[l] != s[r])
                return false;

            l++;
            r--;
        }

        return true;
    }

    vector<vector<string>> ans;

    void solve(string &s,
               int index,
               vector<string> temp)
    {
        if(index == s.size())
        {
            bool valid = true;

            for(auto str : temp)
            {
                if(!isPalindrome(str))
                {
                    valid = false;
                    break;
                }
            }

            if(valid)
                ans.push_back(temp);

            return;
        }

        string curr = "";

        for(int i = index; i < s.size(); i++)
        {
            curr += s[i];

            temp.push_back(curr);

            solve(s, i + 1, temp);

            temp.pop_back();
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<string> temp;

        solve(s, 0, temp);

        return ans;
    }
};

int main()
{
    string s = "aab";

    Solution obj;

    vector<vector<string>> ans = obj.partition(s);

    for(auto &vec : ans)
    {
        cout << "[ ";

        for(auto &str : vec)
        {
            cout << "\"" << str << "\" ";
        }

        cout << "]" << endl;
    }

    return 0;
}