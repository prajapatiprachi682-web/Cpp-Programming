// Arrays
// ✅ Prefix Sum
// ✅ HashMap (unordered_map)
// ✅ Longest Subarray with Sum K





#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {

        unordered_map<long long, int> mp;

        long long prefixSum = 0;
        int ans = 0;

        for(int i = 0; i < arr.size(); i++) {

            prefixSum += arr[i];

            if(prefixSum == k) {
                ans = max(ans, i + 1);
            }

            long long rem = prefixSum - k;

            if(mp.find(rem) != mp.end()) {
                ans = max(ans, i - mp[rem]);
            }

            if(mp.find(prefixSum) == mp.end()) {
                mp[prefixSum] = i;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    int k = 6;

    Solution obj;

    cout << "Longest Length = "
         << obj.longestSubarray(arr, k)
         << endl;

    return 0;
}