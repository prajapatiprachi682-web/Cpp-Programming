//  Last occurrence Finding



#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int lastIndex(string s)
    {
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    string s = "0001000";

    Solution obj;

    cout << "Last Index of 1 = "
         << obj.lastIndex(s)
         << endl;

    return 0;
}