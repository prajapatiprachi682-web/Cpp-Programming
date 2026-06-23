// ✅ Strings
// ✅ Prefix Sum
// ✅ Range Query
// ✅ Vowels
// ✅ LeetCode 2586 - Count the Number of Vowel Strings in Range





#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:

    bool isVowel(char ch)
    {
        return ch=='a' || ch=='e' ||
               ch=='i' || ch=='o' ||
               ch=='u';
    }

    int vowelStrings(vector<string>& words,
                     int left,
                     int right) {

        int n = words.size();

        vector<int> prefix(n + 1, 0);

        for(int i = 0; i < n; i++)
        {
            bool valid =
                isVowel(words[i].front()) &&
                isVowel(words[i].back());

            prefix[i + 1] =
                prefix[i] + (valid ? 1 : 0);
        }

        return prefix[right + 1] -
               prefix[left];
    }
};

int main()
{
    vector<string> words = {"are","amy","u"};

    int left = 0;
    int right = 2;

    Solution obj;

    cout << obj.vowelStrings(words, left, right);

    return 0;
}