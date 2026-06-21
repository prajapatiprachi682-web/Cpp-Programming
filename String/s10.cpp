// ✅ Strings
// ✅ Two Pointers
// ✅ Greedy Matching
// ✅ Subsequence Matching
// ✅ LeetCode 727 - Minimum Window Subsequence





#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    string minWindow(string &s1, string &s2) {

        int n = s1.size();
        int m = s2.size();

        int start = -1;
        int minLen = INT_MAX;

        int i = 0;

        while(i < n)
        {
            int j = 0;

            while(i < n)
            {
                if(s1[i] == s2[j])
                    j++;

                if(j == m)
                    break;

                i++;
            }

            if(i == n)
                break;

            int end = i;

            j = m - 1;

            while(j >= 0)
            {
                if(s1[i] == s2[j])
                    j--;

                i--;
            }

            i++;

            int len = end - i + 1;

            if(len < minLen)
            {
                minLen = len;
                start = i;
            }

            i++;
        }

        if(start == -1)
            return "";

        return s1.substr(start, minLen);
    }
};

int main()
{
    string s1 = "abcdebdde";
    string s2 = "bde";

    Solution obj;

    cout << obj.minWindow(s1, s2);

    return 0;
}