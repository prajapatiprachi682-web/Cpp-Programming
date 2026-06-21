// ✅ Strings
// ✅ Sliding Window
// ✅ HashMap
// ✅ Fixed Size Window
// ✅ LeetCode 30 - Substring with Concatenation of All Words





#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        int wordLen = words[0].size();
        int wordCount = words.size();

        unordered_map<string,int> target;

        for(string word : words)
        {
            target[word]++;
        }

        for(int offset = 0; offset < wordLen; offset++)
        {
            int left = offset;
            int count = 0;

            unordered_map<string,int> window;

            for(int right = offset;
                right + wordLen <= s.size();
                right += wordLen)
            {
                string word = s.substr(right, wordLen);

                if(target.count(word))
                {
                    window[word]++;
                    count++;

                    while(window[word] > target[word])
                    {
                        string leftWord =
                            s.substr(left, wordLen);

                        window[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if(count == wordCount)
                    {
                        ans.push_back(left);

                        string leftWord =
                            s.substr(left, wordLen);

                        window[leftWord]--;
                        left += wordLen;
                        count--;
                    }
                }
                else
                {
                    window.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }

        return ans;
    }
};

int main()
{
    string s = "barfoothefoobarman";

    vector<string> words = {
        "foo",
        "bar"
    };

    Solution obj;

    vector<int> ans =
        obj.findSubstring(s, words);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}