// Substring with Max Zero-One Diff



#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution
{
public:
    int maxSubstring(string &s)
    {
        int curr = 0;
        int maxx = INT_MIN;

        for(char ch : s)
        {
            int val;

            if(ch == '0')
            {
                val = 1;
            }
            else
            {
                val = -1;
            }

            curr += val;

            maxx = max(maxx, curr);

            if(curr < 0)
            {
                curr = 0;
            }
        }

        return (maxx <= 0) ? -1 : maxx;
    }
};

int main()
{
    string s = "11000010001";

    Solution obj;

    cout << "String = " << s << endl;
    cout << "Maximum Difference = "
         << obj.maxSubstring(s)
         << endl;

    return 0;
}