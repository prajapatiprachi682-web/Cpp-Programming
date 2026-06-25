// ✅ Strings
// ✅ Character Traversal
// ✅ Vowel Checking
// ✅ String Filtering
// ✅ GFG - Remove Consonants from a String





#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:

    bool isVowel(char ch)
    {
        ch = tolower(ch);

        return ch=='a' || ch=='e' ||
               ch=='i' || ch=='o' ||
               ch=='u';
    }

    string remConsonants(string &s)
    {
        string ans;

        for(char ch : s)
        {
            if(isVowel(ch))
                ans.push_back(ch);
        }

        return ans;
    }
};

int main()
{
    string s = "GeeksforGeeks";

    Solution obj;

    cout << obj.remConsonants(s);

    return 0;
}