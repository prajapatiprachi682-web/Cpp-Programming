// ✅ Strings
// ✅ Two Pointers
// ✅ Simulation
// ✅ In-place String Manipulation
// ✅ LeetCode 541 - Reverse String II





#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k)
    {
        int n = s.size();

        for(int i = 0; i < n; i += 2 * k)
        {
            int left = i;
            int right = min(i + k - 1, n - 1);

            while(left < right)
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

int main()
{
    string s = "abcdefg";
    int k = 2;

    Solution obj;

    cout << obj.reverseStr(s, k);

    return 0;
}