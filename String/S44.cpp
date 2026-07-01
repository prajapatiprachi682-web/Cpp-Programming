// ✅ Strings
// ✅ String Concatenation
// ✅ Pattern Matching
// ✅ Rotation Check
// ✅ GFG - Check if Strings are Rotations of Each Other





#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool areRotations(string &s1, string &s2)
    {
        if(s1.size() != s2.size())
            return false;

        string temp = s1 + s1;

        return temp.find(s2) != string::npos;
    }
};

int main()
{
    string s1 = "abcd";
    string s2 = "cdab";

    Solution obj;

    cout << obj.areRotations(s1, s2);

    return 0;
}