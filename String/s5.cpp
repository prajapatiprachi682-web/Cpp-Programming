// Process String with special opreation I



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string processStr(string s)
    {
        string res = "";

        for(char ch : s)
        {
            if(ch >= 'a' && ch <= 'z')
            {
                res.push_back(ch);
            }
            else if(ch == '*')
            {
                if(!res.empty())
                {
                    res.pop_back();
                }
            }
            else if(ch == '#')
            {
                res += res;
            }
            else if(ch == '%')
            {
                reverse(res.begin(), res.end());
            }
        }

        return res;
    }
};

int main()
{
    string s = "ab#c*%d";

    Solution obj;

    cout << "Input String  : " << s << endl;
    cout << "Output String : "
         << obj.processStr(s)
         << endl;

    return 0;
}