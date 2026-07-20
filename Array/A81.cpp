// ✅ Arrays
// ✅ Greedy
// ✅ Reverse Traversal
// ✅ Binary Search Thinking
// ✅ GFG - Minimum Initial Value




#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int find(vector<int>& arr)
    {
        long long need = 0;

        for(int i = arr.size() - 1; i >= 0; i--)
        {
            need = (need + arr[i] + 1) / 2;
        }

        return max(1LL, need);
    }
};

int main()
{
    vector<int> arr = {3,4,3};

    Solution obj;

    cout << obj.find(arr);

    return 0;
}