// ✅ Strings
// ✅ Pattern Matching
// ✅ Brute Force String Search
// ✅ LeetCode 28 - Find the Index of the First Occurrence in a String






#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        for(int i = 0; i <= n - m; i++)
        {
            int j = 0;

            while(j < m &&
                  haystack[i + j] == needle[j])
            {
                j++;
            }

            if(j == m)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";

    Solution obj;

    cout << obj.strStr(haystack, needle);

    return 0;
}