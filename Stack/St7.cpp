// ✅ Stack
// ✅ Greedy
// ✅ Strings
// ✅ Parentheses Matching
// ✅ LeetCode 678 - Valid Parenthesis String





#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkValidString(string &s)
{
    stack<int> left;
    stack<int> star;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            left.push(i);
        }
        else if(s[i] == '*')
        {
            star.push(i);
        }
        else
        {
            if(!left.empty())
            {
                left.pop();
            }
            else if(!star.empty())
            {
                star.pop();
            }
            else
            {
                return false;
            }
        }
    }

    while(!left.empty() && !star.empty())
    {
        if(left.top() > star.top())
            return false;

        left.pop();
        star.pop();
    }

    return left.empty();
}

int main()
{
    string s = "(*))";

    if(checkValidString(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}