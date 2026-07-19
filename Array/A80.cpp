// ✅ Arrays
// ✅ Greedy
// ✅ Max Heap (Priority Queue)
// ✅ Simulation
// ✅ GFG - Maximum Amount




#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int maxAmount(vector<int>& arr, int k)
    {
        const int MOD = 1e9 + 7;

        priority_queue<int> pq;

        for(int x : arr)
            pq.push(x);

        long long ans = 0;

        while(k-- && !pq.empty())
        {
            int curr = pq.top();
            pq.pop();

            ans = (ans + curr) % MOD;

            if(curr > 1)
                pq.push(curr - 1);
        }

        return ans % MOD;
    }
};

int main()
{
    vector<int> arr = {2,5};

    int k = 4;

    Solution obj;

    cout << obj.maxAmount(arr, k);

    return 0;
}