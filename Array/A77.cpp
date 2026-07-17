// ✅ Arrays
// ✅ Hashing
// ✅ Modulo Arithmetic
// ✅ Frequency Array
// ✅ GFG - Count Pairs Whose Sum is Divisible by K




#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int countKdivPairs(vector<int>& arr, int k)
    {
        vector<int> freq(k, 0);

        int ans = 0;

        for(int x : arr)
        {
            int rem = x % k;
            int need = (k - rem) % k;

            ans += freq[need];

            freq[rem]++;
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {2,2,1,7,5,3};

    int k = 4;

    Solution obj;

    cout << obj.countKdivPairs(arr, k);

    return 0;
}