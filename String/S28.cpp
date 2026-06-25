// ✅ Strings
// ✅ Sorting
// ✅ Bubble/Selection Sort Logic
// ✅ Nested Loops
// ✅ GFG - Sort a String





#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string sortString(string &s)
    {
        int n = s.size();

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(s[i] > s[j])
                {
                    swap(s[i], s[j]);
                }
            }
        }

        return s;
    }
};

int main()
{
    string s = "edcab";

    Solution obj;

    cout << obj.sortString(s);

    return 0;
}