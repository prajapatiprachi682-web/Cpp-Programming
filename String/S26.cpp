// ✅ Strings
// ✅ Character Array (C-String)
// ✅ String Conversion
// ✅ GFG - Character Array to String






#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string chartostr(char arr[], int n)
    {
        string ans = "";

        for(int i = 0; i < n; i++)
        {
            ans += arr[i];
        }

        return ans;
    }
};

int main()
{
    char arr[] = {'H','e','l','l','o'};
    int n = 5;

    Solution obj;

    cout << obj.chartostr(arr, n);

    return 0;
}