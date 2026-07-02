// ✅ Strings
// ✅ Stack
// ✅ Parsing
// ✅ Recursion Simulation
// ✅ LeetCode 394 - Decode String





#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    string decodeString(string s)
    {
        stack<int> numStack;
        stack<string> strStack;

        string curr = "";
        int num = 0;

        for(char ch : s)
        {
            if(isdigit(ch))
            {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[')
            {
                numStack.push(num);
                strStack.push(curr);

                num = 0;
                curr = "";
            }
            else if(ch == ']')
            {
                int repeat = numStack.top();
                numStack.pop();

                string prev = strStack.top();
                strStack.pop();

                while(repeat--)
                {
                    prev += curr;
                }

                curr = prev;
            }
            else
            {
                curr += ch;
            }
        }

        return curr;
    }
};

int main()
{
    string s = "3[a2[c]]";

    Solution obj;

    cout << obj.decodeString(s);

    return 0;
}