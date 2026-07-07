// Array
// Minimum and Maximum in Array
// Gfg/ Code360




#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getMinMax(vector<int> &arr)
    {
        int mini = arr[0];
        int maxi = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }

        return {mini, maxi};
    }
};

int main()
{
    vector<int> arr = {1, 4, 3, 5, 8, 6};

    Solution obj;

    vector<int> ans = obj.getMinMax(arr);

    cout << "Minimum = " << ans[0] << endl;
    cout << "Maximum = " << ans[1] << endl;

    return 0;
}