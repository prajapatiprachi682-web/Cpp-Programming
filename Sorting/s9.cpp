// ✅ Arrays
// ✅ Sorting
// ✅ Sliding Window
// ✅ Greedy
// ✅ GFG - Chocolate Distribution Problem





#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int findMinDiff(vector<int>& a, int m)
    {
        int n = a.size();

        if(m == 0 || m > n)
        {
            return -1;
        }

        sort(a.begin(), a.end());

        int ans = INT_MAX;

        int i = 0;
        int j = m - 1;

        while(j < n)
        {
            ans = min(ans, a[j] - a[i]);

            i++;
            j++;
        }

        return ans;
    }
};

int main()
{
    vector<int> a = {7,3,2,4,9,12,56};
    int m = 3;

    Solution obj;

    cout << obj.findMinDiff(a, m);

    return 0;
}