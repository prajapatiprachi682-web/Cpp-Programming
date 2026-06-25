// ✅ Binary Search on Answer
// ✅ Greedy
// ✅ Arrays
// ✅ Capacity Allocation
// ✅ LeetCode 1011 - Capacity To Ship Packages Within D Days





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    bool canShip(vector<int>& weights,
                 int days,
                 int capacity)
    {
        int requiredDays = 1;
        int load = 0;

        for(int w : weights)
        {
            if(load + w > capacity)
            {
                requiredDays++;
                load = w;
            }
            else
            {
                load += w;
            }
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days)
    {
        int low = *max_element(weights.begin(),
                               weights.end());

        int high = 0;

        for(int w : weights)
            high += w;

        while(low < high)
        {
            int mid = low + (high - low) / 2;

            if(canShip(weights, days, mid))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main()
{
    vector<int> weights =
    {
        1,2,3,4,5,6,7,8,9,10
    };

    int days = 5;

    Solution obj;

    cout << obj.shipWithinDays(weights, days);

    return 0;
}