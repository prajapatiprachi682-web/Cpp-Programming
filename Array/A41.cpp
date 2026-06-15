// Greatest on Right Side



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> nextGreatest(vector<int> arr)
    {
        int n = arr.size();

        vector<int> ans(n);

        for(int i = 0; i < n; i++)
        {
            int mx = -1;

            for(int j = i + 1; j < n; j++)
            {
                mx = max(mx, arr[j]);
            }

            ans[i] = mx;
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    Solution obj;

    vector<int> ans = obj.nextGreatest(arr);

    cout << "Result Array: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}