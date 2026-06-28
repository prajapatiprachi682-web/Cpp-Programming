// ✅ Strings
// ✅ Counting Sort
// ✅ Frequency Array (Hashing)
// ✅ Character Sorting
// ✅ GFG - Count Sort





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string countSort(string s)
    {
        vector<int> freq(26, 0);

        for(char ch : s)
        {
            freq[ch - 'a']++;
        }

        string ans = "";

        for(int i = 0; i < 26; i++)
        {
            while(freq[i]--)
            {
                ans += char(i + 'a');
            }
        }

        return ans;
    }
};

int main()
{
    string s = "geeks";

    Solution obj;

    cout << obj.countSort(s);

    return 0;
}