// ✅ Arrays
// ✅ Greedy Algorithm
// ✅ Sorting
// ✅ Two Pointers
// ✅ GFG - Shop in Candy Store





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> minMaxCandy(vector<int>& prices, int k)
    {
        sort(prices.begin(), prices.end());

        int n = prices.size();

        int minCost = 0;
        int maxCost = 0;

        int left = 0;
        int right = n - 1;

        while(left <= right)
        {
            minCost += prices[left];
            left++;
            right -= k;
        }

        left = 0;
        right = n - 1;

        while(left <= right)
        {
            maxCost += prices[right];
            right--;
            left += k;
        }

        return {minCost, maxCost};
    }
};

int main()
{
    vector<int> prices = {3,2,1,4};
    int k = 2;

    Solution obj;

    vector<int> ans = obj.minMaxCandy(prices, k);

    cout << ans[0] << " " << ans[1];

    return 0;
}