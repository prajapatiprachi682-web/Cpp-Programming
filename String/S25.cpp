// ✅ Strings
// ✅ Array Traversal
// ✅ Linear Search
// ✅ GFG - Longest String in an Array






#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longest(vector<string>& arr)
    {
        string ans = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i].size() > ans.size())
            {
                ans = arr[i];
            }
        }

        return ans;
    }
};

int main()
{
    vector<string> arr =
    {
        "apple",
        "banana",
        "cat",
        "elephant"
    };

    Solution obj;

    cout << obj.longest(arr);

    return 0;
}