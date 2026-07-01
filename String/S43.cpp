// ✅ Strings
// ✅ Parsing
// ✅ Simulation
// ✅ Overflow Handling
// ✅ LeetCode 8 - String to Integer (atoi)





#include <iostream>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

class Solution {
public:
    int myAtoi(string s)
    {
        int i = 0;
        int n = s.size();

        while(i < n && s[i] == ' ')
            i++;

        int sign = 1;

        if(i < n && (s[i] == '+' || s[i] == '-'))
        {
            if(s[i] == '-')
                sign = -1;

            i++;
        }

        long long num = 0;

        while(i < n && isdigit(s[i]))
        {
            int digit = s[i] - '0';

            if(num > (INT_MAX - digit) / 10)
            {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return sign * num;
    }
};

int main()
{
    string s = "   -42abc";

    Solution obj;

    cout << obj.myAtoi(s);

    return 0;
}