// ✅ Strings
// ✅ Sliding Window
// ✅ Frequency Array
// ✅ Permutation Matching
// ✅ LeetCode 567 - Permutation in String





// Permutation in String
// LeetCode 567

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if(n > m)
            return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        // Frequency of s1
        for(char ch : s1)
        {
            freq1[ch - 'a']++;
        }

        // First window of size n
        for(int i = 0; i < n; i++)
        {
            freq2[s2[i] - 'a']++;
        }

        if(freq1 == freq2)
            return true;

        // Sliding Window
        for(int i = n; i < m; i++)
        {
            freq2[s2[i] - 'a']++;

            freq2[s2[i - n] - 'a']--;

            if(freq1 == freq2)
                return true;
        }

        return false;
    }
};

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    Solution obj;

    if(obj.checkInclusion(s1, s2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}