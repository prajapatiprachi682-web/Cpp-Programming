// ✅ Strings
// ✅ Hashing (unordered_map)
// ✅ Character Frequency
// ✅ GFG - Check if a String is an Isogram






#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsogram(string &s)
    {
        unordered_map<char, int> mp;

        for(char ch : s)
        {
            mp[ch]++;

            if(mp[ch] > 1)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string s = "machine";

    Solution obj;

    if(obj.isIsogram(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}