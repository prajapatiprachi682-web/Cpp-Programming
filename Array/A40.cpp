// Array
// Largest Number Formation
// gfg



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    string maxNumber(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), greater<int>());

        string ans = "";

        for(int x : arr)
        {
            ans += to_string(x);
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {54, 546, 548, 60};

    Solution obj;

    cout << "Maximum Number = "
         << obj.maxNumber(arr)
         << endl;

    return 0;
}