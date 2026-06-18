// ✅ Arrays
// ✅ Prefix Product & Suffix Product
// ✅ Kadane Variant
// ✅ Maximum Product Subarray
// ✅ LeetCode 152 / GFG





#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &arr) {

        long long prefix = 1;
        long long suffix = 1;

        long long ans = INT_MIN;
        int n = arr.size();

        for(int i = 0; i < n; i++) {

            if(prefix == 0)
                prefix = 1;

            if(suffix == 0)
                suffix = 1;

            prefix *= arr[i];
            suffix *= arr[n - i - 1];

            ans = max(ans, max(prefix, suffix));
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {2, 3, -2, 4};

    Solution obj;

    cout << "Maximum Product = "
         << obj.maxProduct(arr)
         << endl;

    return 0;
}