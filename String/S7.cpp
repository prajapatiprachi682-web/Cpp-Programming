// ✅ Strings
// ✅ Hashing (Frequency Array)
// ✅ Anagram Check
// ✅ GFG - Anagram





#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {

        if(s1.size() != s2.size())
            return false;

        int freq[26] = {0};

        for(char ch : s1)
            freq[ch - 'a']++;

        for(char ch : s2)
            freq[ch - 'a']--;

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
                return false;
        }

        return true;
    }
};

int main()
{
    string s1 = "listen";
    string s2 = "silent";

    Solution obj;

    if(obj.areAnagrams(s1, s2))
        cout << "Anagram" << endl;
    else
        cout << "Not Anagram" << endl;

    return 0;
}