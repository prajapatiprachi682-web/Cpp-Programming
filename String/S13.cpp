// ✅ Strings
// ✅ Two Pointers
// ✅ String Traversal
// ✅ LeetCode 58 - Length of last word






#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int right = s.size() - 1;

        while(right >= 0 && s[right] == ' ')
        {
            right--;
        }

        int left = right;

        while(left >= 0 && s[left] != ' ')
        {
            left--;
        }

        return right - left;
    }
};

int main()
{
    string s = "Hello World";

    Solution obj;

    cout << obj.lengthOfLastWord(s);

    return 0;
}