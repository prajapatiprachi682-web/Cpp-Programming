// ✅ Arrays
// ✅ Sorting
// ✅ Two Pointers
// ✅ Unsorted Subarray
// ✅ Find Minimum Window to Sort
// ✅ GFG




#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {

        int n = arr.size();

        int s = 0;

        while(s < n - 1 && arr[s] <= arr[s + 1])
            s++;

        if(s == n - 1)
            return {0, 0};

        int e = n - 1;

        while(e > 0 && arr[e] >= arr[e - 1])
            e--;

        int mn = arr[s];
        int mx = arr[s];

        for(int i = s; i <= e; i++) {
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }

        while(s > 0 && arr[s - 1] > mn)
            s--;

        while(e < n - 1 && arr[e + 1] < mx)
            e++;

        return {s, e};
    }
};

int main() {

    vector<int> arr = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};

    Solution obj;

    vector<int> ans = obj.findSubarray(arr);

    cout << ans[0] << " " << ans[1];

    return 0;
}