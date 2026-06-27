// ✅ Strings
// ✅ Hashing (Frequency Array)
// ✅ Character Groups
// ✅ String Traversal
// ✅ GFG - Count the Reversals of Consecutive Characters





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int getCount(string s, int k)
    {
        vector<int> freq(26, 0);

        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0 || s[i] != s[i - 1])
            {
                freq[s[i] - 'a']++;
            }
        }

        int ans = 0;

        for(int x : freq)
        {
            if(x == k)
            {
                ans++;
            }
        }

        return ans;
    }
};

int main()
{
    string s = "aabbbacca";
    int k = 2;

    Solution obj;

    cout << obj.getCount(s, k);

    return 0;
}