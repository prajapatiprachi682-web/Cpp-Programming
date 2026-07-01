// ✅ Strings
// ✅ Linear Traversal
// ✅ Counting Consecutive Characters
// ✅ GFG - Maximum Consecutive 1's






#include <iostream>
#include <string>
using namespace std;

int maxlength(string s)
{
    int ans = 0;
    int cnt = 0;

    for(char ch : s)
    {
        if(ch == '1')
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    return ans;
}

int main()
{
    string s = "11011101111";

    cout << maxlength(s);

    return 0;
}