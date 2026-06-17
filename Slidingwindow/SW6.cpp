//   ✅ GFG - Subarray with Given Sum



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {

        int n = arr.size();

        int left = 0;
        long long sum = 0;

        for(int right = 0; right < n; right++)
        {
            sum += arr[right];

            while(sum > target && left <= right)
            {
                sum -= arr[left];
                left++;
            }

            if(sum == target)
            {
                return {left + 1, right + 1};
            }
        }

        return {-1};
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;

    Solution obj;

    vector<int> ans = obj.subarraySum(arr, target);

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}