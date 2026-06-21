// ✅ Strings
// ✅ Sliding Window
// ✅ Frequency Count
// ✅ Anagram Matching
// ✅ GFG - Count Occurrences of Anagrams





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
public:
    int search(string &pat, string &txt) {

        int n = txt.size();
        int m = pat.size();

        vector<int> patFreq(26,0);
        vector<int> winFreq(26,0);

        for(int i = 0; i < m; i++)
        {
            patFreq[pat[i]-'a']++;
            winFreq[txt[i]-'a']++;
        }

        int count = 0;

        if(patFreq == winFreq)
            count++;

        for(int i = m; i < n; i++)
        {
            winFreq[txt[i]-'a']++;
            winFreq[txt[i-m]-'a']--;

            if(winFreq == patFreq)
                count++;
        }

        return count;
    }
};

int main()
{
    string pat = "ab";
    string txt = "abcbac";

    Solution obj;

    cout << obj.search(pat, txt);

    return 0;
}