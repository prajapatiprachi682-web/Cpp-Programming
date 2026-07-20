// ✅ Arrays
// ✅ Dynamic Programming (DP)
// ✅ Kadane's Algorithm
// ✅ Prefix & Suffix DP
// ✅ GFG - Maximum Absolute Difference Between Two Non-Overlapping Subarrays




#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxDiffSubArrays(vector<int> &arr) {

        int n = arr.size();

        vector<int> leftMax(n), leftMin(n);
        vector<int> rightMax(n), rightMin(n);

        int cur = arr[0];
        leftMax[0] = arr[0];

        for(int i = 1; i < n; i++) {
            cur = max(arr[i], cur + arr[i]);
            leftMax[i] = max(leftMax[i - 1], cur);
        }

        cur = arr[0];
        leftMin[0] = arr[0];

        for(int i = 1; i < n; i++) {
            cur = min(arr[i], cur + arr[i]);
            leftMin[i] = min(leftMin[i - 1], cur);
        }

        cur = arr[n - 1];
        rightMax[n - 1] = arr[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            cur = max(arr[i], cur + arr[i]);
            rightMax[i] = max(rightMax[i + 1], cur);
        }

        cur = arr[n - 1];
        rightMin[n - 1] = arr[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            cur = min(arr[i], cur + arr[i]);
            rightMin[i] = min(rightMin[i + 1], cur);
        }

        int ans = 0;

        for(int i = 0; i < n - 1; i++) {

            ans = max(ans,
                      abs(leftMax[i] - rightMin[i + 1]));

            ans = max(ans,
                      abs(rightMax[i + 1] - leftMin[i]));
        }

        return ans;
    }
};

int main() {

    vector<int> arr = {1,2,-3,1};

    Solution obj;

    cout << obj.maxDiffSubArrays(arr);

    return 0;
}