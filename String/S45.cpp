// ✅ Strings
// ✅ Sliding Window
// ✅ Two Pointers
// ✅ Hashing (Frequency Array)
// ✅ LeetCode 1358 - Number of Substrings Containing All Three Characters





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s)
    {
        int n = s.size();

        vector<int> freq(3, 0);

        int left = 0;
        int ans = 0;

        for(int right = 0; right < n; right++)
        {
            freq[s[right] - 'a']++;

            while(freq[0] > 0 &&
                  freq[1] > 0 &&
                  freq[2] > 0)
            {
                ans += (n - right);

                freq[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};

int main()
{
    string s = "abcabc";

    Solution obj;

    cout << obj.numberOfSubstrings(s);

    return 0;
}