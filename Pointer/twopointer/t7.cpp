//  ✅ Closest Pair Sum to Target



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

        int bestDiff = INT_MAX;
        int bestGap = -1;

        vector<int> ans;

        while(left < right)
        {
            int sum = arr[left] + arr[right];
            int diff = abs(target - sum);
            int gap = abs(arr[right] - arr[left]);

            if(diff < bestDiff ||
               (diff == bestDiff && gap > bestGap))
            {
                bestDiff = diff;
                bestGap = gap;
                ans = {arr[left], arr[right]};
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