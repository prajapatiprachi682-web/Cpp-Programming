// ✅ Arrays
// ✅ Binary Search
// ✅ Longest Non-Decreasing Subsequence (LNDS)
// ✅ Patience Sorting
// ✅ GFG - Minimum Number of Moves to Make Array Non-Decreasing





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& arr)
    {
        vector<int> lis;

        for(int x : arr)
        {
            auto it = upper_bound(lis.begin(), lis.end(), x);

            if(it == lis.end())
                lis.push_back(x);
            else
                *it = x;
        }

        return arr.size() - lis.size();
    }
};

int main()
{
    vector<int> arr = {5,3,4,8,6,7};

    Solution obj;

    cout << obj.minMoves(arr);

    return 0;
}