//  First and Second Smallests



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> minAnd2ndMin(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());

        int first = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] != first)
            {
                return {first, arr[i]};
            }
        }

        return {-1};
    }
};

int main()
{
    vector<int> arr = {5, 1, 2, 1, 3};

    Solution obj;

    vector<int> ans = obj.minAnd2ndMin(arr);

    if(ans.size() == 1)
    {
        cout << ans[0] << endl;
    }
    else
    {
        cout << "Minimum = " << ans[0] << endl;
        cout << "Second Minimum = " << ans[1] << endl;
    }

    return 0;
}