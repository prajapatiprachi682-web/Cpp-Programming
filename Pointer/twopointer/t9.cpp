// ✅ GFG - Sum Closest to Target



#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

class Solution
{
public:
    vector<int> sumClosest(vector<int>& arr, int target)
    {
        int n = arr.size();

        if(n < 2)
            return {};

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = n - 1;

        long long bestDiff = LLONG_MAX;

        vector<int> ans;

        while(left < right)
        {
            long long sum = arr[left] + arr[right];

            long long diff = abs(sum - target);

            if(diff < bestDiff)
            {
                bestDiff = diff;

                ans = {arr[left], arr[right]};
            }
            else if(diff == bestDiff)
            {
                if(abs(arr[left] - arr[right]) >
                   abs(ans[0] - ans[1]))
                {
                    ans = {arr[left], arr[right]};
                }
            }

            if(sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int target = 54;

    Solution obj;

    vector<int> ans = obj.sumClosest(arr, target);

    cout << "Closest Pair: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}