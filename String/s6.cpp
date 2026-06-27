// ✅ Strings
// ✅ Nested Loops
// ✅ Brute Force
// ✅ Character Searching
// ✅ GFG - First Repeating Character





#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char firstRep(string s)
    {
        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(s[i] == s[j])
                    return s[i];
            }
        }

        return '#';
    }
};

int main()
{
    string s = "geeksforgeeks";

    Solution obj;

    cout << obj.firstRep(s);

    return 0;
}