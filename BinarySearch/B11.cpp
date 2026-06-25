// ✅ Binary Search on Answer
// ✅ Binary Search
// ✅ Greedy Validation
// ✅ Arrays
// ✅ LeetCode 875 - Koko Eating Bananas





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    bool canFinish(vector<int>& piles, int h, int speed)
    {
        long long hours = 0;

        for(int pile : piles)
        {
            hours += (pile + speed - 1) / speed;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h)
    {
        int low = 1;

        int high = *max_element(piles.begin(), piles.end());

        while(low < high)
        {
            int mid = low + (high - low) / 2;

            if(canFinish(piles, h, mid))
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
    vector<int> piles = {3,6,7,11};

    int h = 8;

    Solution obj;

    cout << obj.minEatingSpeed(piles, h);

    return 0;
}